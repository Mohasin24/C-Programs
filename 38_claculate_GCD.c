/**
 * @file 38_claculate_GCD.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-11
 *
 * @problem statement :- C Program to Find GCD of two Numbers
 *
 * GCD :- the Greatest Common Divisor (GCD) is defined as the largest positive integer that divides each of the integers.
 *
 * For example, the GCD of 8 and 12 is 4.
 *
 * The divisor of 8 are 2, 4, 8

The divisor of 12 are 2, 3, 4, 6, 12

From both of these, 2 and 4 are common, and the greatest divisor of 8 and 12 is 4. Hence, the GCD of 8 and 12 is 4.
 *
 */

#include <stdio.h>

int findGCD(int, int);

int main()
{

    int Num1 = 0, Num2 = 0, GCD = 0;

    printf("Enter the first number :- \n");
    scanf("%d", &Num1);
    printf("Enter the second number :- \n");
    scanf("%d", &Num2);

    GCD = findGCD(Num1, Num2);

    printf("The GCD of %d & %d is %d.\n", Num1, Num2, GCD);

    return 0;
}

int findGCD(int N1, int N2)
{
    int GCD = 0; // N1 = 8, N2 = 14

    if (N1 == 0 || N2 == 0)
    {
        if (N1 >= N2)
        {
            GCD = N1;
        }
        else
        {
            GCD = N2;
        }
    }
    else
    {
        for (int i = 1; i <= N1 && i <= N2; i++) // 8 end      i = 1
        {
            if (N1 % i == 0 && N2 % i == 0)
            {
                GCD = i; // 2
            }
        }
    }

    return GCD;
}
