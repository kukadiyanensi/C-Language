#include<iostream.h>
#include<conio.h>

class student 
{    
    private:
    int rno;
    char name[10];
    double fee;

public:
    student()
    {
	cout << "Enter the RollNo:";
	cin >> rno;
	cout << "Enter the Name:";
	cin >> name;
	cout << "Enter the Fee:";
	cin >> fee;
    }

    void display()
    {
  l	cout<<"roll no is==>" <<rno << "\n" << "name is==>"<<name << "\n" << "your fees is==>"<<fee;
    }
};

void main()
{
	clrscr();
    student s;
    s.display();

    getch();
}