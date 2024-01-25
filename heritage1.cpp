#include<iostream.h>
#include<conio.h>
#include<string.h>
class area
{
    public:
    int r,l,h;
  
class rectangle:public area
{
    public:
    void display()
    {
    
        int ans;
            cout<<"enter the value of l:"   ;
            cin>>l;
            cout<<"enter the value of h:";
            cin>>h;
            ans=l*h;
            cout<<"your ans is=>"<<ans;
    }
};
class triangle:public rectangle
{
    void display()
    {
    int ans;
    cout<<"enter the value of r:";
    cin>>r;
    ans=r*r*r;
    cout<<"your ans is =>"<<ans;
    }
};

};
void main()
{
    clrscr();
    shape s;
    s.rectangle::display();
    s.triangle::display();

    getch();
}