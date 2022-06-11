/**
 * @file 29_check_vowl.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write C Program to Check Whether a Character is a Vowel or Consonant.
 *
 */

#include <stdio.h>
#include <ctype.h>

void checkChar(char);

int main()
{
    char cVal = '\0';

    printf("Please enter the character :- \n");
    scanf("%c", &cVal);
    cVal = tolower(cVal);
    checkChar(cVal);

    return 0;
}

void checkChar(char cVal)
{
    char c;
    if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u')
    {
        printf("The character '%c' is vowel.\n", cVal);
    }
    else
    {
        printf("The character '%c' is consonant.\n", cVal);
    }
}