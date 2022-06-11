/**
 * @file 34_sum_n_natural.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a C Program to Calculate the Sum of n Natural Numbers
 * 
 */

#include<stdio.h>
int sumNatural(int);
int main()
{

    int iNum =0, iRet =0;
    printf("Enter a number :-\n");
    scanf("%d",&iNum);

    iRet = sumNatural(iNum);

    printf("The sum from 1 to %d is :- %d\n",iNum,iRet);

    return 0;
}

int sumNatural(int n)
{
    int iSum = 0;

    for(int i =0; i<=n; i++)
    {
        iSum = iSum+i;
    }
    return iSum;
}