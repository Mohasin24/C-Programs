/**
 * @file 06_natural_numbers.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-02
 *
 * @problem statement :- write a program to check if the given number is natural or not
 *
 * natural number are positive integers greater than '0'
 *
 */

#include <stdio.h>

void checkNum(int iNo);
void displayFun(int , char);

int main()
{
    int iNum = 0;
    char cVal = '\0';
    
    displayFun(iNum,cVal);

    return 0;
}

void displayFun(int iNum, char cVal)
{
    while (1)
    {
        printf("Enter Q to exit application:- \n");
        printf("Enter I to continue :-\n");
        scanf("%c",&cVal);

        if (cVal == 'q' || cVal == 'Q')
        {
            printf("Thanks for using the application.\n");
            break;
        }
        else if(cVal == 'i' || cVal=='I')
        {
            printf("Please enter the number :-\n");
            scanf("%d", &iNum);
            
            checkNum(iNum);
            while(getchar()!='\n');
            printf("\n\t*****\n");
        }
        else
        {
            printf("Invalid input\n");
            printf("\n\t*****\n");
            while(getchar()!='\n');
            
        }
    }
}

void checkNum(int iNo)
{
    if (iNo > 0)
    {
        printf("The number %d is a natural number.\n", iNo);
    }
    else
    {
        printf("The number %d is not a natural number.\n", iNo);
    }
}