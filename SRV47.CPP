#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c=1,d,i;
clrscr();
printf("enter a number");
scanf("%d",&n);
printf("The tribonacci series is\n");
printf("%d %d %d ",a,b,c);
for(i=0;i<n-3;i++)
{
d=a+b+c;
printf("%d ",d);
a=b;
b=c;
c=d;
}
getch();
}

