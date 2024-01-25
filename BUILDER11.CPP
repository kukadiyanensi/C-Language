#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
    private:
    int rollno,fees,GRID;
    char name[20];
    long Phno;
public:
student()
{
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your roll no:";
    cin>>rollno;
    cout<<"enter your fees:";
    cin>>fees;
    cout<<"enter your GRID:";
    cin>>GRID;
    cout<<"enter your mobile no:";
    cin>>Phno;

    cout<<endl;


}
void Display()
{
    cout<<"your name is==>"<<name<<endl;
    cout<<"your roll no is==>"<<rollno<<endl;
    cout<<"your fees is==>"<<fees<<endl;
    cout<<"your grid is==>"<<GRID<<endl;
    cout<<"your mobile no is==>"<<Phno<<endl;

    cout<<endl;
    }
};
void main()
{
    clrscr();
    student s1,s2,s3;
    s1.Display();
    s2.Display();
    s3.Display();
    getch();
}