/**
 * @file 07_prime.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-03
 * 
 * @problem statement :- Write a program to check the number is prime or not
 * 
 */

#include<stdio.h>

void checkPrime(int);

int main()
{
    int iNum = 0;
    printf("Enter the number :-\n");
    scanf("%d",&iNum);

    checkPrime(iNum);   

    return 0;
}

void checkPrime(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        printf("The number %d is a not prime number.\n",iNo1);
    }
    else
    {
        printf("The number %d is a prime number.\n",iNo1);
    }
}