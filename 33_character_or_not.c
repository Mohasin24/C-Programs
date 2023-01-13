/**
 * @file 33_character_or_not.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- Write a C Program to Check Whether a Character is an Alphabet or not
 *
 */

#include <stdio.h>
void checkChar(char);
int main()
{
    char cVal = '\0';
    printf("Enter the character :-\n");
    scanf("%c", &cVal);

    checkChar(cVal);
    
    return 0;
}

void checkChar(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is a character.\n", c);
    }
    else
    {
        printf("%c is not a character.\n", c);
    }
}