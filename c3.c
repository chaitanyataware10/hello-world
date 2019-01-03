#include<stdio.h>
void main()
{
int a,b;
printf("Enter values of a and b");
scanf("%d%d",&a,&b);
printf("before swapping a=%d b=%d",a,b);
swap(a,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\nafter swapping a=%d b=%d",a,b);
}
