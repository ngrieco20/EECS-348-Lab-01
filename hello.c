#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets instead of gets for safety

    // Remove trailing newline character from fgets
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Capitalize the string
    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    printf("The capitalized string is: %s\n", str);

    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("The reversed string is: %s\n", str);

    return 0;
}

