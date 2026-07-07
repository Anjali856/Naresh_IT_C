Description
Create a C program that performs addition and multiplication of two integers using separate functions. 
This demonstrates multiple function definitions, parameter passing, and void functions that perform calculations and display results.

Input Format

Two integers separated by space

Prompt: Enter two numbers :

Format: a b

Output Format

Two lines of output:
Line 1: Addition is : [sum]
Line 2: Multiplication is : [product]
Examples
Example 1:

Input

7 8
Output

Addition is : 15
Multiplication is : 56
Example 2:

Input

2 3
Output

Addition is : 5
Multiplication is : 6
  Solution:-
  #include <stdio.h>

void addition(int a, int b)
{
    printf("Addition is : %d\n", a + b);
}

void multiplication(int a, int b)
{
    printf("Multiplication is : %d\n", a * b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    addition(a, b);
    multiplication(a, b);

    return 0;
}
