/**
 * @file 49_long_keyword.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-20
 * 
 * @problem statement :- C Program to Demonstrate the Working of Keyword long
 * 
 */

#include<stdio.h>

int main()
{

    int a = 11;
    long int b = 21;
    long long int c = 51;

    double d = 0;
    long double f = 0;
    
    printf("Size of int a is %d\n",sizeof(a));
    printf("Size of long int b is %d and value of b is %d\n",sizeof(b),b);
    printf("Size of long long int c is %d\n",sizeof(c));
    printf("Size of double d is %d\n",sizeof(d));
    printf("Size of long double f is %d\n",sizeof(f));
    
    return 0;
}