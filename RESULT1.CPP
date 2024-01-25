#include<iostream.h>
#include<conio.h>
#include<string.h>
class result
{

    public:
    int rollno,m1,m2,m3,m4,m5,total;
    float per;
    char name[20];

};
void main()
{
    clrscr();
    result r;
    cout<<"student result as per below:";
    cout<<"enter your name:";
    cin>>r.name;
    cout<<"enter your roll number:";
    cin>>r.rollno;
    cout<<"enter your m1 marks:";
    cin>>r.m1;
    cout<<"enter your m2 marks:";
    cin>>r.m2;
    cout<<"enter your m3 marks:";
    cin>>r.m3;
    cout<<"enter your m4 marks:";
    cin>>r.m4;
    cout<<"enter your m5 marks:";
    cin>>r.m5;
    r.total=r.m1+r.m2+r.m3+r.m4+r.m5;
    cout<<"your total is==>"<<r.total;
    r.per=r.total/5;
    cout<<"your per is==>"<<r.per;
    if(r.per>=90 && r.per<=100)
    {
	cout<<"A Grade";
    }
    else if(r.per>=80 && r.per<=90)
    {
	cout<<"B Grade";
    }
    else if(r.per>=70 && r.per<=80)
    {
	cout<<"C Grade";
    }
    else if(r.per>=60 && r.per<=70)
    {
	cout<<"D Grade";
    }
    else if(r.per>=50 && r.per<=60)
    {
	cout<<"E Grade";
    }
    else
    {
	cout<<"Fail";
    }

    getch();
}
