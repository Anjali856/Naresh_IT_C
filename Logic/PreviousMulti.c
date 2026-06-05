Write a C program to find the previous multiple of 10 for a given two-digit integer number.
Examples
Example 1:

Input

int a = 26
Output

Previous multiple of 10 is: 20
Example 2:

Input

int a = 39
Output

Previous multiple of 10 is: 30

  Solution-:
  #include <stdio.h>

int main()
{
    int a, prevMultiple;

    scanf("%d", &a);

    prevMultiple = (a / 10) * 10;

    printf("Previous multiple of 10 is: %d\n", prevMultiple);

    return 0;
}
