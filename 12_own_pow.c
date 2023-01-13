/**
 * @file 12_own_pow.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-03
 *
 * @problem statement :- Create your own pow() function
 *
 * pow() is defined in math.h header file
 */

#include <stdio.h>
#include <math.h>

double XPow(double, double);

int main()
{
    int num = 0;
    int power = 0;
    printf("Enter a number :-\n");
    scanf("%d", &num);
    printf("Enter the power to the number :-\n");
    scanf("%d", &power);

    printf("Own XPow :- %0.1f\n", XPow(num, power));

    return 0;
}

double XPow(double No1, double No2)
{
    double result = 1;

    for (int i = 0; i < No2; i++)
    {
        result = result * No1;
    }

    return result;
}