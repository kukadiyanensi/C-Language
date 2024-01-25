#include<iostream.h>
#include<conio.h>

class Number
{
private:
    int num;

public:
    void getNumber()
    {
	cout << "Enter an integer number: "<<endl;
	cin >> num;
	cout<<endl;
    }

    int returnNumber()
    {
	return num;
    }
};


class Square : public Number {
public:
    int getSquare()
    {
	int num, sqr;
	num = returnNumber();
	sqr = num * num;
	return sqr;
    }
};


class Cube : public Number {
private:
public:
    int getCube()
    {
	int value, cube;
	value= returnNumber();
	cube = value * value * value;
	return cube;
    }
};

void main()
{
    clrscr();
    Square s;
    Cube c;
    int sqr, cube;

    s.getNumber();
    sqr = s.getSquare();
    cout << "Square of " << s.returnNumber() << " is: " << sqr << endl;

    c.getNumber();
   cube = c.getCube();
    cout << "Cube   of " << s.returnNumber() << " is: " << cube << endl;

    getch();
}