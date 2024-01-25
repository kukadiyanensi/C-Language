#include<iostream.h>
#include<conio.h>

class employee
{
	public:
	int salery,attendence,grid,department;
	char name[20],lastname[20];



};
void main()
{
	clrscr();
	employee e;

	cout<<"enter your name:";
	cin>>e.name;

	cout<<"enter your last name:";
	cin>>e.lastname;

	cout<<"enter your net salery:";
	cin>>e.salery;

	cout<<"enter your monthly attendence:";
	cin>>e.attedence;

	cout<<"enter your grid:";
	cin>>e.grid;

	cout<<"enter your department:";
	cin>>e.department;

	cout<<"your name is ==>"<<e.name<<"\n";
	cout<<"your last name is ==>"<<e.lastname<<"\n";
	cout<<"your net salery is ==>"<<e.salery<<"\n";
	cout<<"your attendence is ==>"<<e.attedence<<"\n";
	cout<<"your grid is ==>"<<e.grid<<"\n";
	cout<<"your department is ==>"<<e.department<<"\n";



	getch();


}