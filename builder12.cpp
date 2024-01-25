#include <iostream>
#include <string.h>
#include <conio.h>
class Student 
{
    private:
        char name[30];
        long rollNo;
        char branch[30];
    public:
        Student() 
        {
        strcpy( this ->name, name);
        this -> rollNo = rollNo;
        strcpy(this -> branch, branch);
        }
    void show() 
    {
        cout << "Student Details are" << endl;
        cout << "Name " << name << endl;
        cout << "Roll No " << rollNo << endl;
        cout << "Branch " << branch << endl;
    }
};
void main()
 {
    clrscr();
    Student student[3] = {
        Student("ram", 1, "yogichowk"),
        Student("rahul", 5, "mota varachha"),
        Student("krishav", 7, "Ak road")
    };
    for (int i = 0; i <= 2; i++) 
    {
        student[i].show();
    }
    getch();
}