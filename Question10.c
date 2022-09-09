// Write a program to print all Armstrong numbers under 1000

#include <stdio.h>

int main() 
{
    int i,rem,num,temp;
    printf("All Armstrong numbers under 1000 : ");
    for(i=1;i<=1000;i++){
        temp = i;
        num=0;
        if(i<=9)
            printf("%d ",i);
        else{
            while(temp){
            rem=temp%10;
            num+=rem*rem*rem;
            temp/=10;
            }
            if(i==num)
                printf("%d ",i);
        }
    }
    return 0;
}