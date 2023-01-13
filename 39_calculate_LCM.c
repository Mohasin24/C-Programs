/**
 * @file 39_calculate_LCM.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Find LCM of two Numbers
 *
 * LCM :- Lowest common multiple
 *
 * LCM = (a*b)/GCD(a,b)
 */

#include <stdio.h>

int findLCM(int, int);
int findGCD(int, int);

int main()
{

    int Num1 = 0, Num2 = 0, LCM = 0;

    printf("Enter the first number :- \n");
    scanf("%d", &Num1);
    printf("Enter the second number :- \n");
    scanf("%d", &Num2);

    LCM = findLCM(Num1, Num2);

    printf("The LCM of %d & %d is %d.\n", Num1, Num2, LCM);

    return 0;
}

int findLCM(int N1, int N2)
{
    int LCM = 0;
    int Max = 0;

    // (N1 > N2) ? (Max = N1) : (Max = N2);

    if (N1>N2)
    {
        Max = N1;
    }
    else
    {
        Max = N2;
    }
    

    while (1)
    {
        if (Max % N1 == 0 && Max % N2 == 0)
        {
            break;
        }
        Max++;
    }

    return Max;
}

// find GCD :- Greatest common divisior

// int findGCD(int N1, int N2) // 8 14
// {
//     int GCD = 0;

//     if (N1 == 0 || N2 == 0)
//     {
//         (N1 > N2) ? (GCD = N1) : (GCD = N2); // ternary operator
//     }
//     else
//     {
//         for (int i = 1; i <= N1 && i <= N2; i++)
//         {
//             if (N1 % i == 0 && N2 % i == 0)
//             {
//                 GCD = i;
//             }
//         }
//     }

//     return GCD;
// }

// int findLCM(int N1, int N2)
// {
//     int LCM = 0;
//     int GCD = findGCD(N1, N2);

//     LCM = (N1 * N2) / GCD;

//     return LCM;
// }

// LCM by division method
