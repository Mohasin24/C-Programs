/**
 * @file 28_odd_even.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a program to check the given number is even or odd    
 * 
 */

#include<stdio.h>

void checkNum(int);

int main()
{

    int iNum = 0;
    printf("Please enter the number :-\n");
    scanf("%d",&iNum);
    checkNum(iNum);
    return 0;
}

void checkNum(int Num)
{
    if(Num%2==0)
    {
        printf("The number %d is a even number.\n",Num);
    }
    else if(Num%2!=0)
    {
        printf("The number %d is a odd number.\n",Num);
    }
}