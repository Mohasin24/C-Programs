/**
 * @file 10_sum_digit.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-03
 *
 * @problem statement :- Write a function to find sum digits of a number.
 *
 */
#include <stdio.h>

int sumDigit(int);

int main()
{
    int iNum = 0;
    int iRet = 0;

    printf("Please enter the number :-\n");
    scanf("%d", &iNum);

    iRet = sumDigit(iNum);

    printf("The sum of digits of number is :- %d\n", iRet);

    return 0;
}

int sumDigit(int iNo)
{
    int originalNum = iNo;
    int remainder = 0;
    int sum = 0;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        originalNum = originalNum / 10;
        sum = sum + remainder;
    }

    return sum;
}