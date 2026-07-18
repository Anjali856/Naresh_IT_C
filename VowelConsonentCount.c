Write a C program that reads a string from the user and counts the number of vowels, consonants, digits, and special characters in the string.
The program should then print these counts.

Input Format

The program prompts the user to enter a string.

Output Format

Print the counts in the following format:

Vowel count is : <count_of_vowels>
Consonant count is : <count_of_consonants>
Digit count is : <count_of_digits>
Special Character count is : <count_of_special_characters>
Examples
Example 1:

Input

Nareshit@123
Output

Vowel count is : 3
Consonant count is : 5
Digit count is : 3
Special Character count is : 1
Example 2:

Input

Abc 1!
Output

Vowel count is : 1
Consonant count is : 2
Digit count is : 1
Special Character count is : 2
  Solution:-
  #include <stdio.h>

int main() {
    char str[1000];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch != '\n') {
            special++;
        }
    }

    printf("Vowel count is : %d\n", vowels);
    printf("Consonant count is : %d\n", consonants);
    printf("Digit count is : %d\n", digits);
    printf("Special Character count is : %d", special);

    return 0;
}
