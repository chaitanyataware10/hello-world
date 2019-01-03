#include<stdio.h>
void main()
{
int a,b;
printf("Enter values of a and b");
scanf("%d%d",&a,&b);
printf("before swapping a=%d b=%d",a,b);
swap(&a,&b);
printf("\nafter swapping a=%d b=%d",a,b);
}
void swap(int *i,int *j)
{
int t;
t=*i;
*i=*j;
*j=t;
}
