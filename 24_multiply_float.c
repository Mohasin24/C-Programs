/**
 * @file 24_multiply_float.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a program to multiply two floating pofloat numbers.
 *
 */

#include <stdio.h>

float Multiply(float,float);

int main()
{
    float Num1 = 0, Num2 = 0, iRet = 0;

    printf("Enter first number :-\n");
    scanf("%f", &Num1);

    printf("Enter second number :-\n");
    scanf("%f", &Num2);

    iRet = Multiply(Num1,Num2);

    printf("Multplication is :- %0.2f\n",iRet);

    return 0;
}

float Multiply(float iNo1, float iNo2)
{
    float Ans = 0;
    Ans  = iNo1 * iNo2;
    return Ans;
}