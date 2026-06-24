Write a C program that takes a total number of seconds as input and converts it into hours, minutes, and remaining seconds.
Examples
Example 1:

Input

int seconds = 3665
Output

1 hr 1 min and 5 sec
Example 2:

Input

int seconds = 7200
Output

2 hr 0 min and 0 sec
solution-:
  #include <stdio.h>

int main() {
    int seconds, hours, minutes, rem_seconds;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    rem_seconds = seconds % 60;

    printf("%d hr %d min and %d sec", hours, minutes, rem_seconds);

    return 0;
}
