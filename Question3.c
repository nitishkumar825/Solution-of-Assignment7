// Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>

int main() 
{
    int num,x=0,y=1,z=0,i,a;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i=0;z<=num;i++)
    {
        z=x+y;
        y=x;
        x=z;
        if (num==z)
        {
            a=1;
            break;
        }
        else
            a=0;
    }
    if (a)
        printf("Present");
    else
        printf("Not Present");
    
    return 0;
}