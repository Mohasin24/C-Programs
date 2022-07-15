/**
 * @file 05_armstrong.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-02
 *
 * @problem statement :- Write a program to check if a given number is Armstrong number or not.
 *
 * Armstrong number :- Armstrong number is sum of nth powers of individual digits where n is number of digits in given number.
 * e.g. :- 153 number of digits in 153 = 3
 * therefore 153 = (1*1*1) + (5*5*5) + (3*3*3) = 153
 *
 */

#include <stdio.h>

int getNumLen(int);
int checkArmstrong(int);

int main()
{
    int iNum = 0, iRet = 0;
    printf("Enter a number :-\n");
    scanf("%d", &iNum);

    iRet = checkArmstrong(iNum);

    if (iRet == iNum)
    {
        printf("%d is a armstrong number.\n", iNum);
    }
    else
    {
        printf("%d is not an armstrong number.\n", iNum);
    }

    return 0;
}

int getNumLen(int iNo)
{
    int iCnt = 0;
    while (iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt; // returns the number of digit enter by the user e.g. n=22 , no. of digit = 2
}

int checkArmstrong(int iNo)
{
    int originalNum = iNo;
    int remainder = 0;
    int sum = 0;
    int mult = 1;
    int numLen = getNumLen(iNo); // number of digits i.e. n
    // printf("Len of digit is %d\n", numLen);

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        originalNum = originalNum / 10;

        for (int i = 0; i < numLen; i++)
        {
            mult = mult * remainder; // returns multiplication of a digit n times
        }
        sum = sum + mult;
        mult = 1;
    }
    return sum;
}
