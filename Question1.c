// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>

int main()
{
    int n,x=1,y=1,z=0;
    printf("\nEnter a value for N : ");
    scanf("%d",&n);
    if (n<=2)
    {
        if(n==1||n==2)
            z=1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            z=x+y;
            y=x;
            x=z;
        }
    }
    printf("\nThe %dth term of Fibonacci series : %d\n",n,z);
    
    return 0;
}


