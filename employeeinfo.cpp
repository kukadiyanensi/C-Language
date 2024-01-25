#include <iostream.h>
#include<conio.h>

class Employee
{
    public:
	int emp_id,emp_age,emp_salary,emp_experience;
	char emp_name[20], emp_role[20], emp_city[20], emp_company_name[20];
};

void main()
{
    int i;
    Employee emp[5];
    clrscr();
    for(i=0;i<5;i++)
    {
	cout<<"Enter details of employee "<<i+1<<":\n";
	cout<<"ID: ";
	cin>>emp[i].emp_id;
	cout<<"Name: ";
	cin>>emp[i].emp_name;
	cout<<"Role: ";
	cin>>emp[i].emp_role;
	cout<<"Age: ";
	cin>>emp[i].emp_age;
	cout<<"Salary: ";
	cin>>emp[i].emp_salary;
	cout<<"Experience: ";
	cin>>emp[i].emp_experience;
	cout<<"City: ";
	cin>>emp[i].emp_city;
	cout<<"Company Name: ";
	cin>>emp[i].emp_company_name;
	cout<<"\n";
    }

    cout<<"\nEmployee Information:\n";
    for(i=0;i<5;i++)
    {
	cout<<"Employee "<<i+1<<":\n";
	cout<<"ID: "<<emp[i].emp_id<<"\n";
	cout<<"Name: "<<emp[i].emp_name<<"\n";
	cout<<"Role: "<<emp[i].emp_role<<"\n";
	cout<<"Age: "<<emp[i].emp_age<<"\n";
	cout<<"Salary: "<<emp[i].emp_salary<<"\n";
	cout<<"Experience: "<<emp[i].emp_experience<<"\n";
	cout<<"City: "<<emp[i].emp_city<<"\n";
	cout<<"Company Name: "<<emp[i].emp_company_name<<"\n\n";
    }

    getch ();
}