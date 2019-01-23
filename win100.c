#include <stdio.h>
int main(void)
{
int i,a[i],j,k,n,m,temp=0,t=0;
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{		
for(m=i+1;m<k;m++)
{
if(a[i]<a[m])
{
temp=a[i];
a[i]=a[m];
a[m]=temp;
}
}
}
for(i=0;i<k;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
