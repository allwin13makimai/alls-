#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[20],k,no;
scanf("%d",&no);
for(i=0;i<no;i++)
{
scanf("%d",&arr[i]);
}
for(i=0; i<no; i++)
{
for(k=i+1;k<no;k++)
{
if(arr[i]==arr[k])
{
printf("%d\n",arr[i]);
}
}
}
}
