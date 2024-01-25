#include<iostream.h>
#include<conio.h>
#include<string.h>
class hotel
{
private:
    int id,staff_size,room_size,establish_year,rating_type;
    char name[20],type[20],address[30],website[20];

    public:
    void display()
    {
     cout<<"enter youe id:";
     cin>>id;
     cout<<"enter your name:";
     cin>>name;
     cout<<"enter your type:";
     cin>>type;
     cout<<"enter your size of staff:";
     cin>>staff_size;
     cout<<"enter your room size:";
     cin>>room_size;
     cout<<"enter your establish year:";
     cin>>establish_year;
     cout<<"enter your address:";
     cin>>address;
     cout<<"enter your rating type:";
     cin>>rating_type;
     cout<<"enter your website:";
     cin>>website;

   cout<<"\nyour id is==>"<<id;
   cout<<"\nyour name is==>"<<name;
   cout<<"\nyour type is==>"<<type;
   cout<<"\nyour size of staff is==>"<<staff_size;
   cout<<"\nyour room size value==>"<<room_size;
   cout<<"\nyour establish_year is==>"<<establish_year;
   cout<<"\nyour address is ==>"<<address;
   cout<<"\nyour rating type is==>"<<rating_type;
   cout<<"\nyour website is==>"<<website;

    }

};
void main()
{
clrscr();
   hotel h;
   h.display();

getch();
}
