#include<stdio.h>
int main() 
{
int a[100],n,i,j,e,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
for(j=0;j<i;j++)
{
e=a[i]-a[j];
s=s+e;
}
}
printf("%d",s);
}
