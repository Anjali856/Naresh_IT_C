Write a C program that reads a string from the user and prints the reverse of the given string.

Input Format

The program prompts the user to enter a string (single word without spaces).

Output Format

The program prints the reversed string.
Examples
Example 1:

Input

wellcome
Output

emocllew
Example 2:

Input

hello
Output

olleh
Solution:-
  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    return 0;
}
