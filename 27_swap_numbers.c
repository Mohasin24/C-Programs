/**
 * @file 27_swap_numbers.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a program to swap to numbers
 *
 */

#include <stdio.h>

void swap(int *, int *);

int main()
{

    int Num1 = 0, Num2 = 0;

    printf("Enter first number :-\n");
    scanf("%d", &Num1);

    printf("Enter second number :-\n");
    scanf("%d", &Num2);

    printf("Numbers before swap %d, %d.\n", Num1, Num2);

    swap(&Num1, &Num2);

    printf("Numbers after swap %d, %d.\n", Num1, Num2);

    return 0;
}

void swap(int *No1, int *No2)
{
    int temp = 0;
    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}