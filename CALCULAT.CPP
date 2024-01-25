#include<iostream.h>
#include<conio.h>

class student
{       private:
	 int m1,m2,total;
	public:
	void setData()
	{
		cout<<"enter your m1 value:";
		cin>>m1;

		cout<<"enter your m2 value:";
		cin>>m2;
	}
	void calculate()
	{
		total=m1+m2;

	}
	void display()
	{
		cout<<"your sum is ==>"<<total;

	}





};
void main()
{
	clrscr();
	student s;
	s.setData();
	s.calculate();
	s.display();



	getch();
}