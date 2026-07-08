Create a C program that finds the maximum of three numbers using a function.
This teaches conditional logic inside functions and handling multiple parameters. 

Input Format 

Three integers separated by spaces 

Prompt: Input three positive number : 

Format: a b c 

Output Format 

Single line output: The biggest number is [max]. 

Note the period at the end as shown in example
Examples
Example 1:

Input

13 31 19
Output

31
Example 2:

Input

5 10 2
Output

10
  Solution:-
  #include <stdio.h>

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", maximum(a, b, c));

    return 0;
}
