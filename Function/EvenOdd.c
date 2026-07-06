Create a C program that determines whether a given number is odd or even using a separate function. This teaches how to create void functions that perform operations and display results directly. 

Input Format 

A single integer input 

No specific prompt required, but can add: Enter a number: 

Output Format 

Display either "Even" or "Odd" 

Output should match exactly: Even or Odd (case-sensitive)
Examples
Example 1:

Input

10
Output

Even
Example 2:

Input

7
Output

Odd
Solution:-
  #include <stdio.h>

void checkOddEven(int n) {
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main() {
    int num;
    scanf("%d", &num);
    checkOddEven(num);
    return 0;
  }
