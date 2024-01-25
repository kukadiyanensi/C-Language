#include<iostream.h>
#include<conio.h>
#include<math.h>
class root
{
   public:
   int value,sqrt;

};

void main()
{
   root r;
  clrscr();
  cout<<"enter your value:";
  cin>>r.value;
  cout<<sqrt(r.value);

   getch();
}