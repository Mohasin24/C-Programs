/**
 * @file 21_case_changer.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a program to replace lowercase letters with uppercase and vice versa in a string.
 *
 */

#include <stdio.h>
#include <ctype.h>

void caseChange(char *);

int main()
{
    int size = 0;
    char Arr[size];
    printf("Please enter the size of string :- \n");
    scanf("%d",&size);

    while(getchar()!='\n');   // string buffer remover

    printf("Enter the string :- \n");
    fgets(Arr,size,stdin);

    printf("String before :- %s\n", Arr);

    caseChange(Arr);

    printf("String after :- %s\n", Arr);
    return 0;
}

void caseChange(char *cPtr)
{
    int i = 0;
    while (*cPtr != '\0')
    {
        if (*cPtr >= 'A' && *cPtr <= 'Z') // accepts upper case letters 
        {
            *cPtr = *cPtr + 32; // converts lower to upper
        }
        else if (*cPtr >= 'a' && *cPtr <= 'z')  // accepts only lower case letters
        {
            *cPtr = *cPtr - 32;  // converts upper to lower case
        }

        cPtr++;
    }
}