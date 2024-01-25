#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{

public:
void display()
{
    int a=10;
    cout<<a;
    a++;
}

};

void main()
{

    student s;
    s.display();
    getch();
}