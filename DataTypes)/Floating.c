Question -:
  Write a program that uses an array to store the grades of 5 students. The program should calculate the average grade, and find the highest and lowest grades among them.

Input Format

Input grades for 5 students as floating-point numbers separated by spaces.

Output Format

Print all the student grades.

Print the average grade rounded to one decimal place.

Print the highest grade.

Print the lowest grade.
Examples
Example 1:

Input

Enter grades for 5 students: 85.5 92.0 78.5 96.0 88.5
Output

Student Grades: 85.5, 92.0, 78.5, 96.0, 88.5; Average: 88.1; Highest: 96.0; Lowest: 78.5
Example 2:

Input

50 50 50 50 50
Output

Student Grades: 50.0 50.0 50.0 50.0 50.0 
Average Grade: 50.0
Highest Grade: 50.0
Lowest Grade: 50.0

  Solution -:
  #include <stdio.h>

int main() {
    float grades[5], sum = 0, average, highest, lowest;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    highest = lowest = grades[0];

    for (int i = 1; i < 5; i++) {
        if (grades[i] > highest)
            highest = grades[i];
        if (grades[i] < lowest)
            lowest = grades[i];
    }

    average = sum / 5;

    printf("Student Grades: ");
    for (int i = 0; i < 5; i++) {
        printf("%.1f ", grades[i]);
    }
    printf("\n");

    printf("Average Grade: %.1f\n", average);
    printf("Highest Grade: %.1f\n", highest);
    printf("Lowest Grade: %.1f\n", lowest);

    return 0;
}
