#include<stdio.h>
void main()
{
char s[10],l;
printf("Enter the string");
gets(s);
//scanf("%s",&s);
l=length(s);
printf("length of %s with spaces is %d",s,l);
}
length(char s[])
{
int i=0;
while(s[i]!='\0')
{
i++;
}
return i;
}
