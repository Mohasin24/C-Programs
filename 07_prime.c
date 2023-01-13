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
    // if prime check = 1
    // if not a prime check = 0

    int check = 0;

    if(iNo1 % 2 == 0)
    {   
        check = 1;
        
    }
    else
    {
        for(int i =2; i<=(iNo1/2); i++)
        {
            if(iNo1%i==0)
            {
                check=1;
                break;
            }
        }
    }

    if(check==0)
    {
        printf("The number %d is a prime number.\n",iNo1);
    }
    else if (check==1)
    {
        printf("The number %d is not a prime number.\n",iNo1);
    }
    
}