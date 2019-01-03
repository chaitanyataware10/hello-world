#include<stdio.h>
void main()
{
int a[10],n,i,k;
printf("Enter no of values");
scanf("%d",&n);
printf("Eneter %d values",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=minimum(a,n);
printf("minimum value is %d",k);
}
int minimum(int a[],int n)
{
int m=a[0],i;
for(i=0;i<n;i++)
{
if(a[i]<m)
{
m=a[i];
}
}
return m;
}

