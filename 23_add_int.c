/**
 * @file 23_add_int.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a program to add two integers   
 * 
 */

#include<stdio.h>

int Addition(int,int);

int main()
{

    int Num1 = 0, Num2 = 0, iRet = 0;

    printf("Enter first number :-\n");
    scanf("%d",&Num1);

    printf("Enter second number :-\n");
    scanf("%d",&Num2);

    iRet = Addition(Num1,Num2);

    printf("Addition is :- %d\n",iRet);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans  = iNo1+iNo2;
    return Ans;
}