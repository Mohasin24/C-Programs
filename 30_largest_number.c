/**
 * @file 30_largest_number.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a C Program to Find the Largest Number Among Three Numbers
 *
 */

#include <stdio.h>

int largestNum(int, int, int);

int main()
{

    int iNum1 = 0, iNum2 = 0, iNum3 = 0;
    int iRet = 0;

    printf("Enter the first number :-\n");
    scanf("%d", &iNum1);
    printf("Enter the second number :-\n");
    scanf("%d", &iNum2);
    printf("Enter the third number :-\n");
    scanf("%d", &iNum3);

    iRet = largestNum(iNum1, iNum2, iNum3);

    printf("The largest number is :- %d\n", iRet);

    return 0;
}

int largestNum(int n1, int n2, int n3)
{
    int temp = 0;

    if (n1 > n2 && n1 > n3)
    {
        temp = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        temp = n2;
    }
    else if (n3 > n1 && n3 > n2)
    {
        temp = n3;
    }

    return temp;
}