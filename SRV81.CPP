#include<stdio.h>
#include<conio.h>
void main()
{
struct book
{
int pr,pg,chap ;
char title[100],author[100];
};
book s;
clrscr();
printf("Enter The Title of Book");
gets(s.title);
printf("Enter The name of author of Book");
gets(s.author);
printf("Enter the number of chapter's in book");
scanf("%d",&s.chap);
printf("Enter the price of book");
scanf("%d",&s.pr);
printf("Enter the NO ofpages in book");
scanf("%d",&s.pg);
printf("\n Title: %s",s.title);
printf("\nauthor: %s",s.author);
printf("\nNO.OF CHAPTER'S : %d",s.chap);
printf("\nPRICE: %drupee",s.pr);
printf("\nNO.PAGES; %d",s.pg);
getch();
}