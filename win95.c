#include <stdio.h>
void main()
{
int a,b,d,i;
scanf("%d %d", &a, &b);
for(i=1; i <= a && i <= b; ++i)
{
if(a%i==0 && b%i==0)
d = i;
}
printf("%d %d %d", a, b, d);
}
