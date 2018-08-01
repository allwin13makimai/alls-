#include<stdio.h>
int main()
{
int sum=1,i,n;
printf("enter the n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum*i;
}
printf("%d",sum);
}
