//hybrid inheritance

#include<iostream.h>
#include<conio.h>
class a
{
	protected:
	  int a;
	public:
   void get_a()
   {
	  cout<<"enter your value of a:"<<endl;
	  cin>>a;
	  cout<<endl;
   }
};
class b:public a
{
	protected:
	  int b;
	public:
   void get_b()
   {
	  cout<<"enter the value of b:"<<endl;
	  cin>>b;
	  cout<<endl;
   }
};
class c:public b
{
	protected:
	  int c;
	public:
   void get_c()
   {
	  cout<<"enter the value of c:"<<endl;
	  cin>>c;
	  cout<<endl;
   }

};
class D: public c
{
	protected:
	  int D;
	public:
   void mul()
   {
	get_a();
	get_b();
	get_c();

    }
    public:
    void ans()
    {
	cout<<"multiplication is =>"<<a*b*c;

    }

};

void main()
{
	clrscr();

	D d;
	d.mul();
	d.ans();

	getch();
}