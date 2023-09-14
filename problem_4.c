//File name :problem_4.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 2 : Problem 4
// Description : Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)
//Last changed : 11-09-2023

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    printf("Prime numbers from 1 to 300 are:\n");

    for (int num = 2; num <= 300; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

