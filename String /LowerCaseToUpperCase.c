Write a C program that reads a string from the user containing only lowercase letters and spaces, and converts the entire string to uppercase.
The program should then print the converted uppercase string.

Input Format

The program prompts the user to enter a string in lowercase letters.

Output Format

Print the converted string in uppercase letters.
Examples
Example 1:

Input

hello world
Output

HELLO WORLD
Example 2:

Input

naresh it
Output

NARESH IT
Solution:-
  #include <stdio.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
