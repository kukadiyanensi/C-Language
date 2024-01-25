#include<iostream.h>
#include<conio.h>
#include<string.h>
class lower
{    
     public:
     char name[20];
};
void main()
{
clrscr();
lower l;
cout<<"enter the data:";
cin>>l.name;
cout<<strlwr(l.name);

getch();
}

