Write a 'C' program to find previous multiple of 100 of given 3 digit number only.
Examples
Example 1:

Input

int a = 261
Output

200
Example 2:

Input

int a = 899
Output

800
  Solution:-
  #include <stdio.h>

int main() {
    int a ;
    scanf("%d",&a);

    int previousMultiple = (a / 100) * 100;

    printf("%d", previousMultiple);

    return 0;
}
