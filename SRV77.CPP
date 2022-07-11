#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0,j=0,l;
char s[20],c;
clrscr();
printf("enter a string");
scanf("%s",&s);
l=strlen(s)-1;
while(i<j)
{
c=s[j];
s[j]=s[i];
s[i]=c;
j++;
i++;



}
printf("The Length of string is %s ",s);
getch();
}