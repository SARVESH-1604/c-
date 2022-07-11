#include<stdio.h>
#include<conio.h>
void main()
{
char g;
int a ;
clrscr();
printf("Enter the gender (m/f) of driver ");
scanf("%c",&g);
printf("enter the age of driver ");
scanf("%d",&a);
if(a<18)
printf("candidate is not eligible to drive");
else if (a<35 && (g=='m'|| g=='M'))
printf("the driver is insured ");
else if (a<25 && (g=='f'|| g=='F'))
printf("the driver is insured ");
else
printf("the driver is not insured");
getch();
}