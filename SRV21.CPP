
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 1st number ");
scanf("%d",&a);
printf("Enter 2nd number ");
scanf("%d",&b);
printf("Enter 3rd number ");
scanf("%d",&c);
if (a>b && a>c)
printf("the greater number is %d",a);
else if(b>a && b>c)
printf("the greater number is %d",b);
else if(c>a && c>b)
printf("the greater number is %d",c);
else
printf("Two or all numbers are same ");
getch();
}