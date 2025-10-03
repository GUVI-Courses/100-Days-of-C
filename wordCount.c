// clean C program to count words in a string entered by the user:
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Traverse string and count words
    for (i = 0; str[i] != '\0'; i++) {
        // If current char is not space and (previous is space or it's start)
        if ((i == 0 && str[i] != ' ') || 
            (str[i] != ' ' && str[i-1] == ' ')) {
            count++;
        }
    }

    printf("No. of Words are : %d\n", count);

    return 0;
}

