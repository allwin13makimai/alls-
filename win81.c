#include<stdio.h>
void main()
{
int minits,hr;
printf("enter the minute");
scanf("%d",&minits);
hr=minits/60;
minits=minits%60;
printf("%d\t%d",hr,minits);
}
