#include<iostream.h>
#include<conio.h>


 class year
 {


      public:
      int s;


 };
void main()
 {
  clrscr();
      year y;
	{
    cout << "Enter a year assign s: ";
    cin >> y.s;


  if (y.s % 400 == 0) {
    cout << y.s << " is a leap year.";
  }

  else if (y.s % 100 == 0) {
    cout << y.s << " is not a leap year.";
  }

  else if (y.s % 4 == 0) {
    cout << y.s << " is a leap year.";
  }

  else {
    cout << y.s << " is not a leap year.";
  }
    }

getch();
}
