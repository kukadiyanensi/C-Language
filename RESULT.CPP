#include<iostream.h>
#include<conio.h>
#include<string.h>
class result
{
  private:
  int m1,m2,m3,m4,total;
  float per;
  char name[20];
  public:
  void getData()
  {
    cout<<"enter your m1 marks:";
    cin>>m1;

	 if(m1<=100)
	  {
	     cout<<"invalid marks";
	  }
	 else
	  {
		cout<<"enter your m2 marks:";
		cin>>m2;

		     if(m2<=100)
		      {
			 cout<<"invalid marks";
		      }
		      else
		      {
			   cout<<"enter your m3 marks:";
			   cin>>m3;

			    if(m3<=100)
			    {
			    cout<<"invalid marks";
			    }
			    else
			    {
			       cout<<"enter your m4 marks:";
			       cin>>m4;

				if(m4<=100)
				 {
				   cout<<"invalid marks";
				  }
				 else
				  {
				  total=m1+m2+m3+m4;
				  cout<<"\nyour total marks is==>"<<total;
				  per=total/4;
				  cout<<"\nyour per is==>"<<per;


				    void grade()
				      {
					 if(per>=90 && per<=100)
				      {
						cout<<"\nA grade";

				       }
					  else if(per>=80 && per<=90)
				       {
						cout<<"\nB grade";

					}
					  else if(per>=70 && per<=80)
					{
						cout<<"\nC grade";

					 }
					   else if(per>=60 && per<=70)
					 {
						cout<<"\nD grade";


					  }
					    else if(per>=50 && per<=60)
					  {
						cout<<"\nE grade";

					  }
					    else
					  {
						 cout<<"\nFail";

					  }

				  }
				  }


			    };

		      }

	   }

  }

};
void main()
{
  clrscr();

     result r;
     r.getData();

 getch();
}
