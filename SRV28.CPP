#include<stdio.h>
#include<conio.h>
void main ()
{
char a;
clrscr();
printf("Enter a Alphabet ");
scanf("%c",&a);
switch(a)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':

case 'U':
printf("It is vowel");
break;
default:
printf(" it is consonant");
}
getch();
}

