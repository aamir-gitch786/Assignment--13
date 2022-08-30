/******************************************************************************
8. Write a recursive function to print first N terms of Fibonacci series

*******************************************************************************/

#include <stdio.h>
int Fibonacci(int);
int a=-1,b=1;
int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    Fibonacci(n);
    return 0;
}
int Fibonacci(int n)
{ int c;
    if(n>=1)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
        Fibonacci(n);
    }
}