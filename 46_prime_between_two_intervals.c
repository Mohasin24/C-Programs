/**
 * @file 46_display_prime.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Display Prime Numbers Between Two Intervals
 *
 */

#include <stdio.h>

void displayPrime(int, int);

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the first number :-\n");
    scanf("%d", &iNo1);
    printf("Enter the second number :-\n");
    scanf("%d", &iNo2);

    displayPrime(iNo1, iNo2);

    return 0;
}

void displayPrime(int iNum1, int iNum2)
{
    printf("Prime numbers between %d and %d are :-\n\n", iNum1, iNum2);

    for (int i = iNum1; i <= iNum2; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    printf("\n\n\t*****");
}