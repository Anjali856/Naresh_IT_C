Description
Learn function implementation in C by creating a simple program that calculates the square of a number using a separate function. This demonstrates function declaration, definition, calling, and returning values. 

Input Format 

A single integer input 

Prompt: Input any number for square : 

Output Format 

Display the calculated square 

Format: The square of [number] is : [result]
Examples
Example 1:

Input

20
Output

400
Example 2:

Input

5
Output

25
  Solution -:
  #include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", square(num));
    return 0;
}
