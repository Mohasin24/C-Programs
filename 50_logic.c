#include<stdio.h>

int main()
{   
  int x = 10, y = 10;

  if(x=5) // here 5 is assinged to x
  { 
    printf("inside");
    printf("%d",x);
    y--;
  }
  ++x;

  printf("%d, %d",x,y--); // 6, 9 instead of 11,9

  return 0; 
}