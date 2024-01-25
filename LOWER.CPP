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
cout<<"your lower case is==>"<<strlwr(l.name);
cout<<"\nyour upercase is==>"<<strupr(l.name);

getch();
}

