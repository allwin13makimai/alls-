#include <stdio.h>
int main()
{
int a[200],i,j,m;
scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]==a[j])
{
printf("%d",a[i]);
goto jump;
}
}
}
jump:
return 0;
}
