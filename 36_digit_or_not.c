/**
 * @file 36_digit_or_not.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a program to check if given charater is digit or not
 *
 */

#include <stdio.h>

void checkChar(char);

int main()
{
    char cVal = '\0';
    printf("Enter a character :-\n");
    scanf("%c", &cVal);

    checkChar(cVal);

    return 0;
}

void checkChar(char c)
{
    if (c >= '0' && c <= '9')
    {
        printf("Given character is a digit.\n");
    }
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("Given character is a alphabate.\n");
    }
}