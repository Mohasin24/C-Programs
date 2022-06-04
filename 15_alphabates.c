/**
 * @file 15_alphabates.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-03
 * 
 * @problem statement :- Write a program to print all the letters in english alphabate using pointe.  
 * 
 */

#include<stdio.h>

int main()
{
    char arr[] = "ENGLISH";
    char *sPtr = arr;
    int i = 0;

    while (*sPtr != '\0')
    {
        printf("%c\n",*sPtr);
        i++;
        sPtr++;
    }
    

    return 0;
}

