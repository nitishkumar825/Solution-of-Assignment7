// Write a program to find next Prime number of a given number

#include <stdio.h>

int main() 
{
    int a=15,i,j,count;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i=a+1;;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++){
            if (i%j==0)
                count++;
        }
        if(count==0)
            break;
    }
    printf("The next Prime number of the given number is : %d",i);
    return 0;
}