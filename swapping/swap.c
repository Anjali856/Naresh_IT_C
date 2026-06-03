Write a 'C' program to swap two integer number using third variable.
Examples
Example 1:

Input

int a = 10, b = 20
Output

Before Swapping: a = 10, b = 20
After Swapping: a = 20, b = 10
Example 2:

Input

int a = 5, b = 15
Output

Before Swapping: a = 5, b = 15
After Swapping: a = 15, b = 5


Solution-:
#include<stdio.h>
void main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
  printf("Before Swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d\n", a, b);
    }
