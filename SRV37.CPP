#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,t,a;
clrscr();
printf("enter a number ");
scanf("%d",&a);
printf("the table is\n");
while(i<=10)
{
t=a*i;
printf("%d\n",t);
i++;
}
getch();
}