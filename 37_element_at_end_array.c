/**
 * @file 37_element_at_end_array.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a program to insert element at the end of an array
 *
 */

#include <stdio.h>

int main()
{
    int iSize = 0;
    int iCheck = 0;
    printf("Enter the size of an array :-\n");
    scanf("%d", &iSize);

    int Arr[iSize];

    for (int i = 0; i < iSize; i++)
    {
        printf("Enter a element at index %d :-\n", i);
        scanf("%d", &Arr[i]);
    }

    printf("Enter '1' to insert an element at the end of array or '0' to print the elements of current array :-\n");
    scanf("%d", &iCheck);

    if (iCheck == 1)
    {
        printf("Enter the element :-\n");
        scanf("%d", &Arr[iSize]);           // inserts element at the last

        for (int i = 0; i <= iSize; i++)
        {
            printf("Element at index %d :- %d\n", i, Arr[i]);    
        }
    }

    if (iCheck == 0)
    {
        for (int i = 0; i < iSize; i++)
        {
            printf("Element at index %d :- %d\n", i, Arr[i]);
        }
    }

    return 0;
}