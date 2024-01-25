#include<iostream.h>
#include<conio.h>
#include<string.h>

class state
{
   private:
   int state_income,count_state_minister,state_area;
   char state_name[10],state_minister_name[20],state_chief_minister[30];
   long int stu_contact;
   public:
   static int statedata;
   state()
    {
	statedata++;
    }

   void getdata()
   {
      cout << "Enter your id: "<<endl;
      cin >> id;
      cout << "Enter state name: "<<endl;
      cin >> stu_name;
      cout << "Enter state roll number: "<<endl;
      cin >> stu_rollno;
      cout << "Enter state standard: "<<endl;
      cin >> stu_standard;
      cout << "Enter state age: "<<endl;
      cin >> stu_age;
      cout << "Enter student contact number: "<<endl;
      cin >> stu_contact;
      cout << "Enter student education institute name: "<<endl;
      cin >> stu_edu_institute_name;
      cout << "Enter student address: "<<endl;
      cin >> stu_address;
      cout<<endl;

   }

   void putdata()
    {
      cout<<"student id is = "<< id <<endl;
      cout<<" student Name is = "<< stu_name <<endl;
      cout<<"student roll number is = "<< stu_rollno <<endl;
      cout<<"student standard is = "<< stu_standard <<endl;
      cout<<" student age is = "<< stu_age <<endl;
      cout<<"student contact number is = "<< stu_contact <<endl;
      cout<<"student education institute name is = "<< stu_edu_institute_name <<endl;
      cout<<" student address is = "<< stu_address <<endl;

      cout<<endl;
   }
};
int Student:: studentdata=0;
void main()
 {
   clrscr();
   Student s1;
   s1.getdata();
   s1.putdata();
   cout<<endl;

   Student s2;

   s2.getdata();
   s2.putdata();
   cout<<endl;

   Student s3;

   s3.getdata();
   s3.putdata();
   cout<<endl;

   Student s4;

   s4.getdata();
   s4.putdata();

   cout << "Total studentdata created = " << Student::studentdata << endl;
   getch();
 }
