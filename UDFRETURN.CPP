#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
 private:
 int a,b;
 public:
 void setA(int x)
 {
    a=x;
 }
 int getA()
 {
    return a;
 }
 void setB(int y)
 {
    b=y;
 }
 int getB()
 {
    return b;
 }


};
void main()
{
  clrscr();
  int x,y;
  student s;
  s.setA(20);
  x=s.getA();

  s.setB(30);
  y=s.getB();
  cout<<"your x value is==>"<<x;
  cout<<"\nyour y value is==>"<<y;

 getch();
}