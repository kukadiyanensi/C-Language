#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char day;
printf("M.monday\nT.tuesday\nW.wednesday\nt.thrusday\nF.firday\n");
scanf("%c",&day);
  if(day=='M')
  {
  printf("monday");
  }
  else if(day=='T')
  {
  printf("tuseday");
  }
else
{
printf("invalid day");

}
  getch();
}