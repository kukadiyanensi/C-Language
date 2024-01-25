#include<iostream.h>
#include<conio.h>
class Mother {
public:
    void display() 
     {
        cout << "I am the mother." << endl;
    }
};

class Daughter : public Mother {
public:
    
    void setdata()
     {
        cout << "I am the daughter." << endl;
    }
};

void main() 
{

    Daughter d;
    d.display();
    d.setdata();

    getch();
}