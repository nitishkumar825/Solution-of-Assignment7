// Write a program to print all Prime numbers between two given numbers

#include <stdio.h>

int main() 
{
    int i,j,count,a,b;
    printf("Enter starting number : ");
    scanf("%d",&a);
    printf("Enter ending number : ");
    scanf("%d",&b);
    printf("All Prime numbers between %d and %d : ",a,b);
    for (i=a;i<=b;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
                count++;
        }
        if(count==0&&i!=1)
            printf("%d ",i);
    }
    
    return 0;
}