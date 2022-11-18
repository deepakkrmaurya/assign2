/*9. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int n,a;
    printf("inter any number");
    scanf("%d",&n);
    n=n/10;
    a=n*10;
    printf("%d",a);
    return 0;
}