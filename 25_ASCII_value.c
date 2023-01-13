/**
 * @file 25_ASCII_value.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a program to find ascii value of a charcter entered by the user
 * 
 */

#include<stdio.h>

int main()
{

    char cVal = '\0';

    printf("Enter the character :-\n");
    scanf("%c",&cVal);

    printf("The ascii value of %c is %d\n",cVal,cVal);

    return 0;
}