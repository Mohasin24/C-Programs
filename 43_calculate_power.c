/**
 * @file 43_calculate_power.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Calculate the Power of a Number
 *
 */

#include <stdio.h>

int calculatePower(int, int);

int main()
{
    int iNum = 0;
    int iPower = 0;
    double iResult = 0;

    printf("Enter a number :-\n");
    scanf("%d", &iNum);
    printf("Enter the power to number :-\n");
    scanf("%d", &iPower);

    iResult = calculatePower(iNum, iPower);
    printf("%d power to %d = %0.0f.\n", iPower, iNum, iResult);

    return 0;
}

int calculatePower(int iNum, int iPower)
{
    double iNumPower = 1.0;
    for (int i = 0; i < iPower; i++)
    {
        iNumPower = iNumPower * iNum;
    }
    return iNumPower;
}