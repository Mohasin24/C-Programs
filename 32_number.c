/**
 * @file 32_number.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a C Program to Check Whether a Number is Positive or Negative
 * 
 */


#include<stdio.h>

int main()
{   
    int Num = 0;
    printf("Enter the number :-\n");
    scanf("%d",&Num);

    if (Num>0)
    {
        printf("%d is a positive number.\n",Num);
    }
    else if(Num<0)
    {
        printf("%d is a negative number.\n",Num);
    }
    

    return 0;
}