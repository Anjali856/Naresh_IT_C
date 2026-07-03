Simple interest is a quick and easy method of calculating the interest charge on a loan. It is determined by multiplying the daily interest rate by the principal by the number of days that elapse between payments.

Write a program to calculate the simple interest based on the Principal amount (P), the Rate of interest per annum (R), and the Time period in years (T).

Formula: Simple Interest = (Principal * Rate * Time) / 100

The program accepts three decimal values (floats/doubles):

Principal: The initial amount of money.

Rate: The annual interest rate in percentage (e.g., 5 for 5%).

Time: The duration in years.
Examples
Example 1:

Input

25000,2,3
Output

The simple interest for the given principal amount 25000.00, rate 2.00%, time 3.00 years is 1500.00.
Example 2:

Input

1000,5,1

Solution-:
  #include <stdio.h>

int main() {
    double principal, rate, time, interest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    interest = (principal * rate * time) / 100.0;

    printf("The simple interest for the given principal amount %.2lf, rate %.2lf%%, time %.2lf years is %.2lf.",
           principal, rate, time, interest);

    return 0;
}
  
Output

The simple interest for the given principal amount 1000.00, rate 5.00%, time 1.00 years is 50.00.
