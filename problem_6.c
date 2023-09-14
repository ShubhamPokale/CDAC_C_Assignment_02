//File name :problem_6.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 6
// Description :  A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number. For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.

//Last changed : 12-09-2023

#include<stdio.h>
int primefact(int n ); 
int main(){
    int num; 

printf("Enter a number to find its prime factors ");
scanf("%d", &num);

if(num < 0 )
{printf("Please enter a positive number :)"); }
else{primefact(num);}


}

int primefact(int n){
    for(int fact = 2; fact <=n; fact++ ){
    
    while(n%fact == 0)
        {printf(" %d", fact);
        n = n/fact;}
    }

}