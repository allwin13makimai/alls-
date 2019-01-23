#include<stdio.h>
int main() 
{
int K,N,a[100000],i,j,x,c=0;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
for(j=0;j!=i && j<N;j++)
{
x=a[i]+a[j];
if(x==K)
{
c=1;
break;
}
 }
}if(c==1)
{
printf("yes");
}else
{
printf("no");
}
}
