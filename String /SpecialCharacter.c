Description
Write a C program that reads a string from the user and converts each character in the string to a corresponding symbol based on the character type:

Lowercase letters → @

Uppercase letters → #

Digits → $

Spaces → *

Special characters (any other characters) → &

The program then prints the converted string of symbols.

Input Format

The program prompts the user to enter a string containing letters, digits, spaces, and special characters.

Output Format

Print the converted string where each character is replaced by the respective symbol.
Examples
Example 1:

Input

Hyd - 16
Output

@##&$$
Example 2:

Input

Ab 1
Output

@#*$
  Solution:-
  #include <stdio.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("@");
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("#");
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            printf("$");
        }
        else if (str[i] == ' ') {
            printf("*");
        }
        else if (str[i] != '\n') {
            printf("&");
        }
    }

    return 0;
}
