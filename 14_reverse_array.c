/**
 * @file 14_reverse_array.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-03
 * 
 * @problem statement :- Write a program to print the elements of an array in reverse order.
 * 
 */

#include<stdio.h>
int inputTable(int *,int);
void disPlay(int *,int num);
void disPlayX(int *,int num);
int main()
{   
    int arr[10];
    int Num = 0;
    printf("Please enter the to print multiplication table in reverse order :-\n");
    scanf("%d",&Num);

    inputTable(arr,Num);
    disPlay(arr,Num);
    printf("\n\t*****\n");
    disPlayX(arr,Num);

    return 0;
}

int inputTable(int *Ptr,int num)
{
    for(int i = 1; i<=10; i++)
    {
        *Ptr = num*(i);
        Ptr++;
    }
    // Ptr = &Ptr[9 ];
    // for(int i = 10; i>0; i--)
    // {   Ptr--;
    //     printf("%d x %d = %d\n",num,i,*Ptr);
        
    // }
}

void disPlay(int *Brr,int num)
{   
    printf("Using pointers :-\n");
    for (int i = 10; i >0; i--)
    {   
        int *Crr = &Brr[i-1];
        printf("%d x %d = %d\n",num,(i),*Crr);
        Crr--;
        
    }
    
}
void disPlayX(int Brr[],int num)
{   
    printf("Using array :-\n");
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n",num,(i),Brr[i-1]);
    }
    
}