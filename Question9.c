// Write a program to check whether a given number is an Armstrong number or not...

#include <stdio.h>

int main() 
{
    int num,sum=0,digit=0,i,rem,temp,match,pow;
    printf("Enter a number : ");
    scanf("%d",&num);
    match=temp=num;
    while(temp){
        temp/=10;
        digit++;
    }
    pow=digit;
    while(digit){
        rem=num%10;
        num/=10;
        i=pow;
        int x=1;
        while(i){
            x=x*rem;
            i--;
        }
        sum+=x;
        digit--;
    }

    if(sum==match)
        printf("Yes! %d is an Armstrong number",match);
    else
        printf("NO! %d is not an Armstrong number",match);
    return 0;
}