/**
 * @file 11_temp.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-03
 *
 * @problem statement :- Write a function to print "Hot", "Normal" or "Cold" depending on the temperature user enters
 *
 */

#include <stdio.h>

void deterTemperature(float);

int main()
{
    float fTemper = 0.0;
    printf("please enter the temperature in celcius :-\n");
    scanf("%f", &fTemper);

    deterTemperature(fTemper);

    return 0;
}

void deterTemperature(float iNum)
{
    if (iNum > 30)
    {
        printf("The temperature is very hot.\n");
    }
    else if (iNum > 10 && iNum < 30.0)
    {
        printf("The temperature is normal.\n");
    }
    else if (iNum <= 10)
    {
        printf("Temperature is cold.\n");
    }
    else
    {
        printf("Please enter valid temperature.\n");
    }
}