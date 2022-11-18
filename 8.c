/*8. Write a program to print size of an int, a float, a char and a double type variable*/
#include<stdio.h>
int main()
{   int a,b,c,d;
   a= sizeof(int);
   b=sizeof(float);
   c=sizeof(char);
   d=sizeof(double);
   printf("int=%d byte\n float=%d byte\n char=%d byte\n double=%d byte",a,b,c,d);

    return 0;
}