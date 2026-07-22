Write a C program that reads a string from the user and counts the number of words in the string. Words are sequences of characters separated by spaces.

Input Format

The user inputs a single line string that may contain words separated by spaces.

Output Format

Print the total number of words in the input string.
Examples
Example 1:

Input

naresh it hyd.
Output

3
Example 2:

Input

Hello
Output

1
Solution:-
  #include <stdio.h>

int main() {
    char str[1000];
    int i, count = 0;
    int inWord = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d", count);

    return 0;
}
