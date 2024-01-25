#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
    private:
    int rno,grid;
    char name[10],surname[20];
    double fee;

public:
    student()
    {
	cout << "enter your name:";
	cin >> name;
	cout << "Enter the RollNo:";
	cin >> rno;
	cout << "Enter the surName:";
	cin >> surname;
	cout << "enter your GRID:";
	cin >> grid;
	cout << "Enter the Fee:";
	cin >> fee;
	cout <<endl;
    }

    void display()
    {
	cout << "your name is ==>"<<name <<endl;
	cout << "your roll no is==>" <<rno <<endl;
	cout << "your surname is==>"<<surname <<endl;
	cout << "your GRID is ==>"<<grid <<endl;
	cout << "your fees is==>"<<fee;
    }
};

void main()
{
	clrscr();
    student s;
    s.display();

    getch();
}