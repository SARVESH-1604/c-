#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a Number ");
scanf("%d",&a);
if(a>0)
printf("It Is positive ");
else if(a<0)
printf("It Is Negative ");
else
printf("it is neutral ");
getch();
}