#include<stdio.h>
#include<string.h>
void main()
{
char s1[50],s2[50];
int i,d=0;
scanf("%s%s",s1,s2);
for(i=0;i<strlen(s1);i++)
{
if(s1[i]==s2[i])
d++;
}
printf("%d",d);
}
