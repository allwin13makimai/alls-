#include<stdio.h>
int main()
{
int a[200],n,i,j,k,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0 && (i+1)%2!=0||(a[i]%2==0 && (i+1)%2==0))
{
printf("%d",a[i]);
}
}
return 0;
}
