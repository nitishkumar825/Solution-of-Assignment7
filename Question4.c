// Write a program to calculate HCF of two numbers

#include <stdio.h>

int main() 
{
    int a,b,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for (i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
        if (i%a==0&&i%b==0)
            break;

    printf("HCF is = %d",(a*b)/i);

    return 0;
}