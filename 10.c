/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int n ,a,add=0,num,sum;
    printf("inter any number");
    scanf("%d",&n);
    //num=n;
    while(n!=0)
    {
       a=n%10;
       add=add+a;
       n=n/10;
    }
    
    printf("%d%d",num,add);
    return 0;
}