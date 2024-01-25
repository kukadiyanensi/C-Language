#include<iostream.h>
#include<conio.h>
class account
{
	public:
	float salery;

};
class programmer:public account
{
	public:
	float bonus,sum;
	char name[20];

};
void main()
{
	clrscr();
	programmer p;
	cout<<"enter your name:";
	cin>>p.name;
	cout<<"enter your salery:";
	cin>>p.salery;
	cout<<"enter your bonus:";
	cin>>p.bonus;

	cout<<"your name is==>"<<p.name<<endl;
	cout<<"your salery is==>"<<p.salery<<endl;
	cout<<"your bonus is==>"<<p.bonus<<endl;
	p.sum=p.salery+p.bonus;
	cout<<"your total amount is==>"<<p.sum;

	getch();
}