/******************************************************************************
6. Write a recursive function to calculate factorial of a given number
*******************************************************************************/

#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("factorial of %d is : %d",n,fact(n));

    return 0;
}
int fact(int n)
{
    
    if(n==0)
    return 1;
    return n*fact(n-1);
}