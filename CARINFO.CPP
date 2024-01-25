#include <iostream.h>
#include<conio.h>

class car
{
    public:
	int car_id,car_model,car_release_year;
	char car_company_name[20], car_color[20];
};

void main()
{
    int i;
    car c[5];
    clrscr();
    for(i=0;i<2;i++)
    {
	cout<<"Enter details of car "<<i+1<<":\n";
	cout<<"ID: ";
	cin>>c[i].car_id;
	cout<<"color: ";
	cin>>c[i].car_color;
	cout<<"model: ";
	cin>>c[i].car_model;
	cout<<"company name: ";
	cin>>c[i].car_company_name;
	cout<<"release year: ";
	cin>>c[i].car_release_year;

	cout<<"\n";
    }

    cout<<"\nEmployee Information:\n";
    for(i=0;i<2;i++)
    {
	cout<<"car "<<i+1<<":\n";
	cout<<"ID: "<<c[i].car_id<<"\n";
	cout<<"color: "<<c[i].car_color<<"\n";
	cout<<"model: "<<c[i].car_model<<"\n";
	cout<<"company name: "<<c[i].car_company_name<<"\n";
	cout<<"release year: "<<c[i].car_release_year<<"\n";

    }

    getch ();
}