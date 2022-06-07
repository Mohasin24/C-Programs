/**
 * @file 22_calloc.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Allocate memory for 500 integers using calloc & then store first 500 natural in thar space
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    printf("Please enter the size :- \n");
    scanf("%d", &size);

    int *iPtr = NULL;

    iPtr = (int *)calloc(size, sizeof(int));

    if (iPtr == NULL)
    {
        printf("Unable to allocate the memery\n");
    }
    else
    {
        printf("Memory allocates successfully\n");
    }

    for (int i = 0; i < size; i++)
    {
        iPtr[i] = (i + 1);
    }

    printf("\n\t*****\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", iPtr[i]);
    }

    free(iPtr);

    return 0;
}