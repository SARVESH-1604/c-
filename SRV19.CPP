#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter 1st Number ");
scanf("%d",&a);
printf("Enter 2nd Number ");
scanf("%d",&b);
printf("Enter 3rd Number ");
scanf("%d",&c);
d=a>b ? a:b;
d=c>d ? c:d;
printf(" The Greater Number is %d",d);
getch();
}
