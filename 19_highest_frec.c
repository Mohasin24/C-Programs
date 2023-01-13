/**
 * @file 19_highest_frec.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-06
 *
 * @problem statement :- Write a program to priny highest frequency character in string.
 *
 */

#include <stdio.h>
#include <ctype.h>

void highFrec(char *cPtr);

int main()
{
    char Arr[] = "my naame is aAA";
    highFrec(Arr);

    return 0;
}

void highFrec(char *cPtr)
{
    char finalResult = '\0'; // dispaly highest occurring charcter
    int freqCount = 0;       // counts number of occurance of highest occurring charcter

    int i = 0, j = 0, iCnt = 0;

    while (cPtr[i] != '\0')
    {
        char Result_1 = tolower(cPtr[i]);   //converts to lower case 

        j = 0;        // re-initialisation of inner loop counter

        while (cPtr[j] != '\0')
        {
            char Result_2 = tolower(cPtr[j]);    //converts to lower case

            if (Result_1 == Result_2)       // compares i'th and j'th lowercase character
            {
                iCnt++;
            }
            j++;
        }

        if (iCnt > freqCount)
        {
            freqCount = iCnt;
            finalResult = cPtr[i];
        }

        i++;
        iCnt = 0;     // re-initialisation of number of occurance of highest occurring charcter
    }
    printf("The character '%c' occurs at %d times.\n", finalResult, freqCount);
}