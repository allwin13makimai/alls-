#include <stdio.h>
int main()
{
int n,q,u[10],v[10],a[10],i,j,l;
scanf("%d %d",&n,&q);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(l=1;l<=q;l++)
{
scanf("%d %d",&u[l],&v[l]);
}
for(l=1;l<=q;l++)
{
int x=0;
for(i=u[l];i<=v[l];i++)
{
x=x^a[i];
}
printf("%d\n",x);
}
return 0;
}
