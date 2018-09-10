#include <stdio.h>
int main()
{
int a,b,c,d,f;
scanf("%d", &a);
b=a;
while (a!=0)
{
c=a%10;
d=pow(c,3);
f=f+d;
a=a/10;
}
if (f==b)
{
printf ("yes");}
else
{
printf ("not");}
return 0;
}
}
