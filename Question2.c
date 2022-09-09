// Write a program to print first N terms of Fibonacci series...

#include <stdio.h>

int main()
{
    int n,x=0,y=1,z=0,i;
    printf("\nEnter a value for N : ");
    scanf("%d",&n);
    printf("\nFibonacci series till %dth terms: ",n);
    for (i=0;i<n;i++)
    {
        z=x+y;
        y=x;
        x=z;
        printf("%d ",z);
    }

    return 0;
}