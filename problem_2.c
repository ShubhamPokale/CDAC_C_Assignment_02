//File name :problem_2.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 2 : Problem 2
// Description : Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number
//  is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
//Last changed : 11-09-2023

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1;
    else
        return 0;
}

int main() {
    printf("Armstrong numbers between 1 and 500 are:\n");

    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}