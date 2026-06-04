Write a 'C' program to swap any two integer number without using third variable.
Examples
Example 1:

Input

int a = 10, b = 20
Output

Before Swapping: a = 10, b = 20
After Swapping: a = 20, b = 10
Example 2:

Input

int a = 30, b = 40
Output

Before Swapping: a = 30, b = 40
After Swapping: a = 40, b = 30


  Solution-:
  #include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Before Swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping: a = %d, b = %d\n", a, b);

    return 0;
}
