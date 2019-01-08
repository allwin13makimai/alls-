#include <stdio.h>
void main()
{
int b, f;
int a = 1;
scanf("%d", &b);
scanf("%d", &f);
while (f!= 0)
{
a *= b;
--f;
}
printf("%d", a);
}
