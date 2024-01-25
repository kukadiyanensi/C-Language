#include <iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>

class Demo
 {

private:
     int x,y,ans;

public:
 Demo()
 {
    cout << "Enter Value of X: ";
    cin >> x;
    cout << "Enter Value of Y: ";
    cin >> y;
 }

  void Display()
 {
    cout << "X value is==>" << x << endl;
    cout << "Y value is==>" << y << endl;
    ans= x * y;
   cout<<"ans is==>"<<ans;
 }
};

void  main()
{
    clrscr();
    Demo d;
    d.Display();
     getch();
}