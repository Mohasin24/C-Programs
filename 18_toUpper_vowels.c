/**
 * @file 18-lowerCase_owels.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-06
 *
 * @problem statement :-  Write a program to convert all lower case vowels to upper case in string.
 *
 */

#include <stdio.h>
#include <ctype.h>

void upperCase(char *);

int main()
{
    char vowelsLower[] = {'a', 'e', 'i', 'o', 'u', '\0'};

    upperCase(vowelsLower);

    printf("%s\n", vowelsLower);

    return 0;
}

// void upperCase(char *cPtr)
// {
//     while (*cPtr!='\0')
//     {
//         *cPtr = *cPtr - 32;
//         cPtr++;
//     }
// }

void upperCase(char *cPtr)
{
    while (*cPtr != '\0')
    {
        *cPtr = toupper(*cPtr);
        cPtr++;
    }
}
