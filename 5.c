/*5. Write a program to input a three digit number and display the sum of the digits.*/
#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("inter any number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}