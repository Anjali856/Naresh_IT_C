Write a C program that reads a string input from the user and prints the length of the string.

Input Format

The program prompts the user with: Enter a string:

The user inputs a string, which may include alphabets, spaces, punctuation, or special characters.

Output Format

The program prints the length of the entered string as:
Length of the string: X
where X is the number of characters in the string, including spaces and punctuation.
Examples
Example 1:

Input

Hello,World!
Output

12
Example 2:

Input

A B C
Output

5
Solution:-
  #include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n') {
        len--;
    }

    printf("%d", len);

    return 0;
}
