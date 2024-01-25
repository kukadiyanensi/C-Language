#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
    int a;
    char c[20];

    public:
    void display()
    {
     cout<<"enter youe a value:";
     cin>>a;
     cout<<"enter your c name:";
     cin>>c;

   cout<<"\nyour value a value==>"<<a;
   cout<<"\nyour name is==>"<<c;


    }

};
void main()
{
clrscr();
   student s;
   s.display();

getch();
}
