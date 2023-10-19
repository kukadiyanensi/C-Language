#include<stdio.h>
#include<conio.h>
void main()
{
int day;
clrscr();

printf("1.mondey\n2.tuesday\n3.wenesday4.thursday\n5.friday");
scanf("%i",&day);
 if(day==1)
 {
 printf("monday");
 }
 else if(day==2)
 {
 printf("tuesday");
 }
 else if(day==3)
 {
 printf("wenesday");
 }
else
{
printf("invaild day");
}
getch();
}