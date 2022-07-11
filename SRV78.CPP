#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0,j=0;
char s[20],c,l;
clrscr();
printf("enter a string");
scanf("%s",&s);
gets(s-1);
while(i<j)
{
c=s[j];
s[j]=s[i];
s[i]=c;
j++;
i--;



}
printf("The Length of string is %s ",s);
getch();
}
