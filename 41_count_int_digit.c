/**
 * @file 41_count_int_digit.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Count Number of Digits in an Integer
 *
 */

#include <stdio.h>

int countDigit(int);

int main()
{
    int iDigit = 0;
    int iCnt = 0;

    printf("Enter a number :-\n");
    scanf("%d", &iDigit);

    iCnt = countDigit(iDigit);

    printf("The number of digit in %d are %d.\n", iDigit, iCnt);

    return 0;
}

int countDigit(int iNum)
{
    int count = 0;
    while (iNum != 0)
    {
        iNum = iNum / 10; // breaks the loop when the value of iNum=0
        count++;
    }
    return count;
}