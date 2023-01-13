/**
 * @file 17_number_of_occurance.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-04
 *
 * @problem statement :- In an array of numbers, find how many times does a number 'x' occurs.
 *
 */

#include <stdio.h>

int main()
{

    int x = 0, iSize = 0, iCnt = 0;
    int Arr[iSize];

    printf("Please enter array size :-\n");
    scanf("%d", &iSize);

    for (int i = 0; i < iSize; i++)
    {
        printf("Please enter no. %d element :-\n", (i + 1));
        scanf("%d", &Arr[i]);
    }

    printf("\n\t*****\n");

    printf("Please enter the number to check occurance :-\n");
    scanf("%d", &x);

    for (int i = 0; i < iSize; i++)
    {
        if (x == Arr[i])
        {
            iCnt++;
        }
    }

    printf("The number of occurance of %d is %d times.\n", x, iCnt);

    return 0;
}