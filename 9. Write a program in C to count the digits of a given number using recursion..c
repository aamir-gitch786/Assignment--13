/******************************************************************************
9. Write a program in C to count the digits of a given number using recursion.
*******************************************************************************/

#include <stdio.h>
int digit(int);
int count=0;
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Total digits in %d is : %d",n,digit(n));

    return 0;
}
int digit(int n)
{
    if(n>0)
    {
        digit(n/10);
        count++;
    }
    return count;
}