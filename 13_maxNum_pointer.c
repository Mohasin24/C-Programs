/**
 * @file 13_maxNum_pointer.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-03
 *
 * @problem statement :- Write a program in C to find maximum nuber between two numbers using pointers
 *
 */

#include <stdio.h>

void maxNum(int *, int *);
void inputNum(int *, int *);

int main()
{
    int iNum1 = 0, iNum2 = 0;
    
    inputNum(&iNum1, &iNum2);
    maxNum(&iNum1, &iNum2);

    return 0;
}
void inputNum(int *iNo1, int *iNo2)
{
    printf("Please enter the first number :-\n");
    scanf("%d", iNo1);
    printf("Please enter the second number :-\n");
    scanf("%d", iNo2);
}
void maxNum(int *Ptr1, int *Ptr2)
{
    if (*Ptr1 > *Ptr2)
    {
        printf("The number %d is greater than %d.\n", *Ptr1, *Ptr2);
    }
    else if (*Ptr2 > *Ptr1)
    {
        printf("The number %d is greater than %d.\n", *Ptr2, *Ptr1);
    }
    else if (*Ptr1 == *Ptr2)
    {
        printf("Both the numbers are same.\n");
    }
}