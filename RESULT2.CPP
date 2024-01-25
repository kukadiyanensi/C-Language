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
    cout<<"student result as per below:\n";
    cout<<"enter your name:";
    cin>>r.name;
    cout<<"enter your roll number:";
    cin>>r.rollno;
    cout<<"enter your m1 marks:";
    cin>>r.m1;
    if(r.m3==0 || r.m1>=100)
    {
	cout<<"invalid syntax";
    }
    else
    {
	cout<<"enter your m2 marks:";
	cin>>r.m2;
	if(r.m2==0 || r.m2>=100)
	{
	    cout<<"Invalid syntax";
	}
	else
	{
	    cout<<"enter your m3 marks:";
	    cin>>r.m3;
	    if(r.m3==0 || r.m3>=100)
	    {
		cout<<"Invalid syntax";
	    }
	    else
	    {
		cout<<"enter yor m4 marks:";
		cin>>r.m4;
		if(r.m4==0 || r.m4>=100)
		{
		    cout<<"Invalid syntax";
		}
		else
		{
		    cout<<"enter your m5 marks:";
		    cin>>r.m5;
		    if(r.m5==0 || r.m5>=100)
		    {
			cout<<"Invalid syntax";
		    }
		    else
		    {
			r.total=r.m1+r.m2+r.m3+r.m4+r.m5;
			cout<<"\nyour total is ==>"<<r.total;
			r.per=r.total/5;
			cout<<"\nyour per is ==>"<<r.per;
			if(r.per>=90 && r.per<=100)
			{
				cout<<"\nA Grade";
			}
			else if(r.per>=80 && r.per<=90)
			{
				cout<<"\nB Grade";
			}
			else if(r.per>=70 && r.per<=80)
			{
				cout<<"\nC Grade";
			}
			else if(r.per>=60 && r.per<=70)
			{
				cout<<"\nD Grade";
			}
			else if(r.per>=50 && r.per<=60)
			{
			    cout<<"\nE Grade";
			}

			else
			{
				cout<<"\nFail";
			}


		    }
		}
	    }
	}
     }
   getch();
}
