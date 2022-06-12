/**
 * @file 42_reverse_num.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @problem statement :- C Program to Reverse a Number
 * 
 */

#include<stdio.h>

void reverseNum(int);
int countDigit(int);

int main()
{
    int iDigit = 0;
    int reverse = 0;
    printf("Enter the number :-\n");
    scanf("%d",&iDigit);

    printf("The reverse order of %d is ",iDigit);
    reverseNum(iDigit);
    printf(".\n");

    return 0;
}

int countDigit(int iNo)
{
    int iCount = 0;
    while(iNo!=0)
    {
        iNo = iNo/10;
        iCount++;
    }
    return iCount;
}

// to get exact reverse of an number

void reverseNum(int iNum)
{
    int arrLen = countDigit(iNum);
    int iRemainder = 0;
    int Arr[arrLen];
    int i = 0;    // Loop counter

    while(iNum != 0)
    {
        iRemainder = iNum%10;
        Arr[i] = iRemainder;
        iNum = iNum/10;
        i++;
    }

    for(int i = 0; i<arrLen; i++)
    {
        printf("%d",Arr[i]);
    }
}

// only reverse a number but fails in case of numbers like multiple of 10 e.g. 10,500,etc
/* int reverseNum(int iNum)
{
    int iReverse = 0;
    int iRemainder = 0;
    while(iNum!=0) //20
    {
        iRemainder = iNum%10;  // 0 :- 2
        iReverse = (iReverse*10) + iRemainder; // 0+2
        iNum = iNum/10; //2
    }
    return iReverse;
}
*/