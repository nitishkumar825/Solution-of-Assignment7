// Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>

int main() 
{
    int a=8,b=9,count=0,i;
    printf("Enter two numbers:-\n");
    scanf("%d%d",&a,&b);
    for (i=a<b?a:b;i>1;i--)
        if (a%i==0&&b%i==0)
            count++;
    
    if (count==0)
        printf("%d and %d are Co Prime numbers",a,b);
    else
        printf("%d and %d are not a Co Prime numbers",a,b);
    
    return 0;
}