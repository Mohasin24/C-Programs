/**
 * @file 26_Quotient_Remainder.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- write a C Program to Compute Quotient and Remainder
 *
 */

#include <stdio.h>
void cal(int, int);

int Quotient, Remainder;

int main()
{

    int dividend = 0, divisor = 0;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    cal(dividend, divisor);
    printf("Quotient = %d\n", Quotient);
    printf("Remainder = %d\n", Remainder);

    return 0;
}

void cal(int no1, int no2)
{
    int *localQuotient = &Quotient;
    int *localRemainder = &Remainder;

    *localQuotient = no1 / no2;
    *localRemainder = no1 % no2;
}