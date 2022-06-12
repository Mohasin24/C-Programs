/**
 * @file 45_check_Palindrome.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-12
 *
 * @problem statement :- C Program to Check Whether a Number is Palindrome or Not
 *
 */

#include <stdio.h>

void checkPalindrome(int);

int main()
{

    int iNum = 0;
    printf("Enter the number :- \n");
    scanf("%d", &iNum);

    checkPalindrome(iNum);

    return 0;
}

void checkPalindrome(int iNo)
{
    int iRemainder = 0;
    int iResult = 0;
    int originalNum = iNo;

    while (originalNum != 0)
    {
        iRemainder = originalNum % 10;
        iResult = (iResult * 10) + iRemainder;
        originalNum = originalNum / 10;
    }

    // palindrome if iResult and iNo are equal
    if (iResult == iNo)
    {
        printf("The number %d is a palindrome number.\n", iNo);
    }
    else
    {
        printf("The number %d is not an palindrome number.\n", iNo);
    }
}