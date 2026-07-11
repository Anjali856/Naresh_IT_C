You're working on a calendar application that needs to accurately determine leap years for scheduling events. 
A leap year has 366 days instead of the usual 365, with February having 29 days. Your task is to write a function that determines whether a given year is a leap year according to the Gregorian calendar rules.

Input Format:

The program will prompt: "Enter a year: "

User enters a single integer representing the year

Output Format:

If the year is a leap year: "[year] is a leap year."

If the year is NOT a leap year: "[year] is not a leap year."
Examples
Example 1:

Input

2024
Output

 2024 is a leap year.
Example 2:

Input

2021
Output

2021 is not a leap year.
Solution:-
  #include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int main()
{
    int year;
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);

    return 0;
}
