#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Enter the courses:");
scanf("%d",&i);
switch(i)
{
case 1:
printf("java");
break;

case 2:
printf("html");
break;

case 3:
printf("python");
break;

default:
printf("invalid");
}
getch();
}