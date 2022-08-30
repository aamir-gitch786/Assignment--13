/******************************************************************************
5. Write a recursive function to calculate sum of digits of a given number
*******************************************************************************/

#include <stdio.h>
int digits(int);
int sum=0;
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is : %d",n,digits(n));

    return 0;
}
int digits(int n)
{
    
    if(n>0)
    {   digits(n/10);
        sum+=(n%10);
        
    }
    return sum;
}