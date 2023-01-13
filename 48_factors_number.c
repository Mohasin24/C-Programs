/**
 * @file 48_factors_number.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-15
 *
 * @problem statement :- C Program to Display Factors of a Number
 *
 */

#include <stdio.h>

void displayFactor(int);

int main()
{
    int iNum = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iNum);

    displayFactor(iNum);

    return 0;
}

void displayFactor(int iNo)
{
    printf("Factors of %d :-\n", iNo);

    for (int i = 1; i <= iNo; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d\n", i);
        }
    }
}