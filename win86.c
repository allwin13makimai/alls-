#include<stdio.h>
int main()
{
int n,a[10],i,j,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
for(int m=j+1;m<n;m++)
{
if(a[i]+a[j]==a[m])
{
printf("%d %d %d\n",a[i],a[j],a[m]);
}
}
}
}
return 0;
}
