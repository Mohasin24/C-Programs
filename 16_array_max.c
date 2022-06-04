/**
 * @file 16_array_max.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-03
 *
 * @problem statement :- Write a program to print the largest number in array
 *
 */

#include <stdio.h>

int main()
{
    int temp = 0;
    int iNum = 0;
    int arr[iNum];

    printf("Please enter number of elements of an array :-\n");
    scanf("%d", &iNum);

    for (int i = 0; i < iNum; i++)
    {
        printf("Enter element no. %d :-\n", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < iNum; i++)
    {

        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    printf("Largest element i above array is %d\n", temp);

    return 0;
}