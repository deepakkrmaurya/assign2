/*1. Write a program to print unit digit of a given number*/
#include<stdio.h>
int main()
{
    int n;
    printf("inter any number");
    scanf("%d",&n);
    n=n%100;
    printf("%d",n);
    return 0;
}