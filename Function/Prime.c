Create a C program that checks whether a given number is prime using a function.
A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Input Format

A single integer

Prompt: Input a positive number :

Output Format

Single line output:

If prime: The number [n] is a prime number.

If not prime: The number [n] is not a prime number.

Exact wording and period as shown
Examples
Example 1:

Input

5
Output

Prime
Example 2:

Input

4
Output

Not Prime
Solution -:
  #include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
  }
  
