#include <stdio.h>
int main()
{
int m,a[100],i,j;
int arr[100],count=0;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
arr[i]=1;
}
for(i=1;i<m;i++)
{
if(arr[i]>arr[i-1])
arr[i]=arr[i-1]+1;
}
for(i=0;i<m;i++)
count=count+arr[i];
printf("%d",count);
return 0;
}
