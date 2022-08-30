/******************************************************************************
7. Write a recursive function to calculate HCF of two numbers
*******************************************************************************/

#include <stdio.h>
int HCF(int,int,int);

int main()
{  int a,b,min;
   printf("Enter two numbers : ");
   scanf("%d%d",&a,&b);
   min=(a>b)?b:a;
   printf("%d ",HCF(a,b,min));

    return 0;
}
 
int HCF(int a,int b,int c)//using minimum value passing
{ 
    if(a%c==0 && b%c==0 )
    return c;
    
  c--;
  HCF(a,b,c);
}