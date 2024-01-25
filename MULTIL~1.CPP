// Multilevel Inheritance
#include <iostream.h>
#include <conio.h>

class A
{
public:
    int a;
    void get_A()
    {
	cout << "Enter value of a: "<<endl;
	cin >> a;
    }
};

class B : public A
{
public:
    int b;
    void get_B()
    {
	cout << "Enter value of b: "<<endl;
	cin >> b;
    }
};

class C : public B
{
private:
    int c;

public:
    void get_C()
    {
	cout << "Enter value of c: "<<endl;
	cin >> c;
    }


    void sum()
    {
	int ans = a + b + c;
	cout << "sum is=> " << ans;
    }
};
void main()
{
    clrscr();
    C obj;

    obj.get_A();
    obj.get_B();
    obj.get_C();
    obj.sum();
    getch();
}