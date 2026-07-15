Description
Write a C program that reads a string from the user and swaps the first and last characters of the string, then prints the resulting string.

Input Format

The program prompts the user to enter a string (single word without spaces).

Output Format

The program prints the modified string after swapping the first and last characters.
Examples
Example 1:

Input

Welcome
Output

eelcomW
Example 2:

Input

Hello
Output

oellH
Solution:-
  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", str);

    int len = strlen(str);

    if (len > 1) {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("%s", str);

    return 0;
}
