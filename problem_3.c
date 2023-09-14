//File name :problem_3.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 2 : Problem 3
// Description : Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
//Last changed : 11-09-2023
#include<stdio.h>
int main() {
    int num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume any previous newline character.

    } while (choice == 'y' || choice == 'Y');

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}