#include <iostream.h>
#include <string.h>
#include<conio.h>

class Employee 
{
    protected:
        string emp_name;
        string emp_email;
        string emp_password;

    public:
        void getEmployeeInfo() 
        {
            cout << "Enter employee name: ";
            cin>>emp_name;

            cout << "Enter employee email: ";
            cin>>emp_email;

            cout << "Enter employee password: ";
            cin>>emp_password;
        }

        void displayEmployeeInfo()
         {
           cout << "Employee Information:" <<endl;
            cout<< "Name: " << emp_name <<endl;
            cout<< "Email: " << emp_email <<endl;
           cout << "Password: " << emp_password <<endl;
        }
};


class ContactInfo 
{
    protected:
        string emp_contact;
        string emp_city;

    public:
        void getContactInfo() 
        {
            cout << "Enter employee contact: ";
            cin>>emp_contact;

            cout << "Enter employee city: ";
            cin>>emp_city;
        }

        void displayContactInfo() {
            cout<< "Contact Information:" <<endl;
            cout<< "Contact: " << emp_contact <<endl;
            cout<< "City: " << emp_city <<endl;
        }
};



class EmployeeInfo : public Employee, public ContactInfo
{
public:

    void getEmployeeDetails()
     {
        getEmployeeInfo();
        getContactInfo();

    }

    void displayEmployeeDetails()
     {
        displayEmployeeInfo();
        displayContactInfo();
    }
};

void main()
 {

    EmployeeInfo employee;

    employee.getEmployeeDetails();
    cout << "\nEmployee Details:\n";
    employee.displayEmployeeDetails();

    getch();
}