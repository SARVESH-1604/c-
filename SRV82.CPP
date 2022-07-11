#include<stdio.h>
#include<conio.h>
void main()
{
struct date
{
int d,y;
char m[100];
};
date s;
clrscr();
printf("Enter The date");
scanf("%d",&s.d);
printf("Enter The Mnnth");
scanf("%s",&s.m);
printf("Enter the year");
scanf("%d",&s.y);
printf("\ndate :%d %s %d",s.d,s.m,s.y);
getch();
}