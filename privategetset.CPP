#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
  private:
  int a,b;
  public:
  int total;
  void setData()
  {
    cout<<"enter your a value:" ;
    cin>>a;
    cout<<"enter your b value:";
    cin>>b;

  }
  void getData()
  {
    cout<<"\nyour a value is==>"<<a;
    cout<<"\nyour b value is==>"<<b;

    total=a+b;

    cout<<"\nyour total is==>"<<total;
  }



};
void main()
{
  clrscr();
 student s;
 s.setData();
 s.getData();



getch();
}