/**
 * @file 35_multiplication_table.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a C Program to Generate Multiplication Table
 *
 */

#include <stdio.h>

void printTable(int);

int main()
{

    int iNum = 0;
    printf("Enter a number :- \n");
    scanf("%d", &iNum);

    printTable(iNum);

    return 0;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, (n * i));
    }
}