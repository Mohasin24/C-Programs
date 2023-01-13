/**
 * @file 47_armstrong_between_two_intervals.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-13
 *
 * @problem statement :- C Program to Display Armstrong Number Between Two Intervals
 *
 *  Armstrong number :- Armstrong number is sum of nth powers of individual digits where n is number of digits in given number.
 * e.g. :- 153 number of digits in 153 = 3
 * therefore 153 = (1*1*1) + (5*5*5) + (3*3*3) = 153
 */

#include <stdio.h>

void displayArmstron(int, int);

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the first number :-\n");
    scanf("%d", &iNo1);
    printf("Enter the second number :-\n");
    scanf("%d", &iNo2);

    if(iNo1>iNo2)
    {
        int temp = iNo1;
        iNo1 = iNo2;
        iNo2 = temp;
    }

    printf("in1  = %d\n",iNo1);   
    printf("in2  = %d\n",iNo2);   

    displayArmstron(iNo1, iNo2);

    return 0;
}

void displayArmstron(int iNum1, int iNum2)
{
    for (int i = iNum1; i <= iNum2; i++)
    {
        int compareNum = i;
        int originalNum = i;
        int checkArm = i;
        int numLen = 0;

        int iSum = 0;
        int iRemainder = 0;

        while (originalNum != 0)
        {
            originalNum = originalNum / 10;
            numLen++;
        }

        while (checkArm != 0)
        {
            int iResult = 1;
            iRemainder = checkArm % 10;

            for (int j = 0; j < numLen; j++)
            {
                iResult = iResult * iRemainder;
            }
            iSum = iSum + iResult;
            checkArm = checkArm / 10;
        }

        if (iSum == compareNum)
        {
            printf("%d is an armstrong number.\n", compareNum);
        }
    }
}
