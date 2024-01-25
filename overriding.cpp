// Online C++ compiler to run C++ program online
#include <iostream>
class person
{
    
    public:
    int a,b,c;
    void sum()
    {
        a=10;
        b=40;
        c=a+b;
        std::cout<<c;
    }
    
};
class student : public person{
    public:
     int x,y,z;
    void sum()
    {
        x=20;
        y=80;
        z=x+y;
        std::cout<<z;
    }
};
void main()
 {

    
student s;
s.sum();

    getch();
}