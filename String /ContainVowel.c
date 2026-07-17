Description
Write a C program that reads a string from the user and checks if the string contains any vowels (a, e, i, o, u, including uppercase letters).
The program should display whether the string contains vowels or not.

Input Format

The program prompts the user to enter a string (single word without spaces).

Output Format

If the string contains at least one vowel, print:
This String contains vowel.

Otherwise, print:
There is no vowel present in this String.
Examples
Example 1:

Input

Apple
Output

Contains vowel
Example 2:

Input

Rhythm
Output

No vowel
Solution:-
  #include <stdio.h>

int main() {
    char str[100];
    int i, found = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Contains vowel");
    else
        printf("No vowel");

    return 0;
}
