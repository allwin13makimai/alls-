#include<stdio.h>
void main()
{
int b[10],i,n;
printf("enter the limimt");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("the elements with index");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",i,b[i]);
}
}
