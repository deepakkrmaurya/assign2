/*12. Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int n,a,add,add1,add2,sum,b,c,d;
    printf("inter any number");
    scanf("%d",&n);
    
    
    a=n%10;
    add=a*100;
    b=n/10;
    c=b%10;
    add1=c*10;
     d=b/10;
    add2=d;
    sum=add+add1+add2;

   
    printf("%d",sum);
    return 0;
}