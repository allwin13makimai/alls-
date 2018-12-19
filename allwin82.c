#include<stdio.h>
void main()
{
int hr,min,hr0,min0,hr1,min1;
printf("enter 2 times in hour and minute format");
scanf("%d%d",&hr0,&min1);
scanf("%d%d",&hr1,&min1);
hr=hr1-hr0;
min=min1-min0;
printf("%d\t%d",hr,min);
}
