#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
clrscr();
int i,j=0,k=0,b,len;
char s[200],s1[10][20],temp;
printf("enter the string=");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
s1[k][j]='\0';
k++;
j=0;
}
else
{
s1[k][j]=s[i];
j++;
}
}
s1[k][j]='\0';
for(i=0;i<=k;i++)
{
len=strlen(s1[i]);
for(j=0,b=len-1;j<b;j++,b--)
{
temp=s1[i][j];
s1[i][j]=s1[i][b];
s1[i][b]=temp;
}
}
for(i=0;i<=k;i++)
{
 printf("%s",s1[i]);
}
return 0;
}
