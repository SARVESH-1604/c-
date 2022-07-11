#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,t,a,b,r;
clrscr();
printf("enter 1st number ");
scanf("%d",&a);
printf("enter 2nd number ");
scanf("%d",&b);
printf("the table of number are is\t");
while(i<=10)
{
t=a*i;
printf("%d\t",t);
r=b*i;
printf("%d\n",r);
i++;
}
getch();
}