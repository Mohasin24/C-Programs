/**
 * @file 08_n_prime.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-03
 * 
 * @problem statement :- Write a program to print first n prime number take n as an input from user
 * 
 * prime number :- the number which is only divsible by 1 or the number itself that remainder =0    
 */


#include<stdio.h>
void displayPrime(int);
int main()
{
    int iNum = 0;
    printf("Enter a number to print first n prime numbers :-\n");
    scanf("%d",&iNum);

    displayPrime(iNum);

    return 0;
}

void displayPrime(int iNo)
{
    for(int i = 1; i<=iNo; i++)
    {   
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}