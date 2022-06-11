/**
 * @file 31_leap_year.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a C Program to Check Leap Year
 *
 */

#include <stdio.h>
void checkYear(int);
int main()
{
    int iRet = 0;
    int iYear = 0;
    printf("Please enter the year :-\n");
    scanf("%d", &iYear);
    checkYear(iYear);

    return 0;
}

void checkYear(int Y)
{
    // leap year if perfectly divisible by 400
    if (Y % 400 == 0)
    {
        printf("%d is a leap year.", Y);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (Y % 100 == 0)
    {
        printf("%d is not a leap year.", Y);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (Y % 4 == 0)
    {
        printf("%d is a leap year.", Y);
    }
    // all other years are not leap years
    else
    {
        printf("%d is not a leap year.", Y);
    }
}