Write a 'C' program to reverse the given 3 digit number without using control statements.
Examples
Example 1:

Input

int a = 123
Output

reverse = 321
Example 2:

Input

int a = 456
Output

reverse = 654
  Solution-:
  #include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    printf("reverse = %d%d%d",
           a % 10,
           (a / 10) % 10,
           a / 100);

    return 0;
}
