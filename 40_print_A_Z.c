/**
 * @file 40_print_A_Z.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Display Characters from A to Z Using Loop
 *
 * ASCII A = 65 & a = 97
 */

#include <stdio.h>

void printA_Z(int);

int main()
{
    while (1)
    {
        int iChoice = 0;
        printf("Enter 1 to print capital letters.\n");
        printf("Enter 2 to print small letters.\n");
        printf("Enter '0' to exit :\n");
        scanf("%d", &iChoice);

        if (iChoice == 0)
        {
            break;
        }
        printA_Z(iChoice);
        printf("\n\n");
    }

    return 0;
}

void printA_Z(int iNum)
{
    switch (iNum)
    {
    case 1:

        for (int i = 'A'; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        break;
    case 2:
        for (int i = 'a'; i <= 'z'; i++)
        {
            printf("%c ", i);
        }
        break;
    default:
        printf("Please enter a valid choice between 1 or 2.\n");
    }
}