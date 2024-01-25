#include<iostream.h>
#include<conio.h>
#include<string.h>

class state
{
   private:
   int state_income,cout_state_minister,state_tax;
   char state_name[10],state_chief_minister[20],state_capital[30];
   long int state_department;
   public:
   static int statedata;
   state()
    {
	statedata++;
    }

   void getdata()
   {
      cout << "Enter your state name: "<<endl;
      cin >> state_name;
      cout << "Enter your state chief minister name : "<<endl;
      cin >>  state_chief_minister ;
      cout << "Enter state income: "<<endl;
      cin >> state_income;
      cout << "Enter cout state minister: "<<endl;
      cin >> cout_state_minister;
      cout << "Enter state tax: "<<endl;
      cin >> state_tax;
      cout << "Enter state department: "<<endl;
      cin >> state_department;
      cout << "Enter capital of state: "<<endl;
      cin >> state_capital;
      cout<<endl;

   }

   void putdata()
    {
      cout<<"state name is = "<< state_name <<endl;
      cout<<" state chief minister name is = "<< state_chief_minister <<endl;
      cout<<"state income is = "<< state_income <<endl;
      cout<<"cout state minister  is = "<< cout_state_minister <<endl;
      cout<<" state tax is = "<< state_tax <<endl;
      cout<<"state department is = "<< state_department <<endl;
      cout<<"capital of state is = "<< state_capital <<endl;
      cout<<endl;
   }
};
int state:: statedata=0;
void main()
 {
   clrscr();
   state s1;
   s1.getdata();
   s1.putdata();
   cout<<endl;

   state s2;

   s2.getdata();
   s2.putdata();
   cout<<endl;

   state s3;

   s3.getdata();
   s3.putdata();
   cout<<endl;

   
   cout << "Total statedata created = " <<  state:: statedata << endl;
   getch();
 }
