Write a C program to calculate and print the sum of the first N natural numbers without using any loop
Examples
Example 1:

Input

int n = 10
Output

55
Example 2:

Input

int n = 5
Output

15
  Solution-:
  #include<stdio.h>
  void main()
{
int n,sum;
scanf("%d",&n);
sum= n*(n+1)/2;
printf("%d",sum);
}
