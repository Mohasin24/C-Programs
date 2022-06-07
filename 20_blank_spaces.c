/**
 * @file 20_blank_spaces.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @problem statement :- Write a program to remove blank spaces in a string.   
 * 
 */

#include<stdio.h>

void removeSpaces(char *);

int main()
{
    char Arr[] = {'s','t',' ','i','n','g','\0'};
    printf("String with spaces :- %s\n",Arr);

    removeSpaces(Arr);
    
    printf("String without spaces :- %s\n",Arr);

    return 0;
}

void removeSpaces(char *cPtr)
{
    int i = 0;
    int j = 0;
    while(cPtr[i]!='\0')
    {
        if(cPtr[i]!=' ')
        {
            cPtr[j]=cPtr[i];
            j++;
        }
        i++;
    }
    cPtr[j]='\0';
}