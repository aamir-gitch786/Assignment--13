/******************************************************************************
3. Write a recursive function to calculate sum of first N even natural numbers
*******************************************************************************/

#include <stdio.h>
int natural(int);
int sum=0;
int main()
{
    int n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    printf("Sum of first %d is : %d",n,natural(n));

    return 0;
}
int natural(int n)
{
    
    if(n>0)
    {   natural(n-1);
        sum+=(2*n);
        
    }
    return sum;
}