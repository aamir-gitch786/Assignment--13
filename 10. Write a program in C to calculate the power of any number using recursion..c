/******************************************************************************
10. Write a program in C to calculate the power of any number using recursion.
*******************************************************************************/

#include <stdio.h>
#include<math.h>
int power_number(int,int);
int ans=0;
int main()
{   int a,b;
    printf("Enter the number(base) :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    printf("%d number with %d power is %d^%d  = %d ",a,b,a,b,power_number(a,b));

    return 0;
}
int power_number(int B,int P)
{
    if(P>1)
    {  P--;
        ans+=B*pow(B,P);
        power_number(B,P);//recursion
    }
    return ans;
}