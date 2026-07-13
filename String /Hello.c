Description
Write a C program that reads a string input from the user and prints it exactly as entered on the console.

Input Format

The program prompts the user with: Enter a String :

The user enters a string (which can include alphabets, digits, punctuation, or special characters).

Output Format

The program prints the exact string entered by the user.
Examples
Example 1:

Input

hello...!
Output

hello...!
Example 2:

Input

C Programming
Output

C Programming
Solution:-
  #include <stdio.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}
