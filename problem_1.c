//File name :problem_1.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 2 : Problem 1
// Description : Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour
//         for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
//Last changed : 11-09-2023

#include <stdio.h>

int main() {
    // Constants
    const int regularHours = 40; // Regular working hours per week
    const float overtimeRate = 12.0; // Overtime pay rate per hour

    // Variables
    int employeeHours[10]; // Array to store hours worked by each employee
    float overtimePay[10]; // Array to store overtime pay for each employee

    // Input hours worked for each employee
    for (int i = 0; i < 10; i++) {
        printf("Enter hours worked by Employee %d: ", i + 1);
        scanf("%d", &employeeHours[i]);
    }

    // Calculate overtime pay for each employee
    for (int i = 0; i < 10; i++) {
        if (employeeHours[i] > regularHours) {
            int overtimeHours = employeeHours[i] - regularHours;
            overtimePay[i] = overtimeHours * overtimeRate;
        } else {
            overtimePay[i] = 0.0; // No overtime worked
        }
    }

    // Display overtime pay for each employee
    printf("\nEmployee Overtime Pay:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d: Rs. %.2f\n", i + 1, overtimePay[i]);
    }

    return 0;
}
