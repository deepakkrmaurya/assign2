/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/
#include<stdio.h>
int main()
{
    int INR;
    float USD;
    printf("inter the amount INR");
    scanf("%d",&INR);
    USD=INR*76.23;
    printf("USD=%0.2f",USD);
    return 0;
}