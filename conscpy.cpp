#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
    private:
    int rno;
    char name[50];
    double fee;
    public:
    student(int,char[],double);
    student(student &t)       
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    void display();
     
};
 
 
 
 
    student::student(int no,char n[],double f)
    {
        rno=no;
        strcpy(name,n);
        fee=f;
    }    
 
   void student::display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
     
int main()
{
    student s(31,"nensi",95000);
    s.display();
     
    student nensi(s);   
    nensi.display();
     
    return 0;
}