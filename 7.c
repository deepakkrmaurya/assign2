/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>
int main()
{
    int n;
    printf("inter any number");
    scanf("%d",&n);
   if((n&1)==0)
   {
     printf("even number");

   }
   else
   printf("odd number");
    return 0;
}