#include<stdio.h>
void main()
{
int n,o;
scanf("%d%d",&n,&o);
int a[n],count,i,j,b[o];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<o;i++)
scanf("%d",&b[i]);
for(i=0;i<o;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
count++;
}
if(count==0)
break;
}
if(i==o)
printf("Yes");
else
printf("No");
}
