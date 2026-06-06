Write a 'C' program to find next multiple of 100 of given 3 digit number only.
Examples
Example 1:

Input

int a = 348
Output

400
Example 2:

Input

int a = 120
Output

200
   Solution-:

  #include <stdio.h>

int main() {
    int a ;
    scanf("%d",&a);

    int nextMultiple = ((a / 100) + 1) * 100;

    printf("%d", nextMultiple);

    return 0;
}
