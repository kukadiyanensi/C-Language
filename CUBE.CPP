#include<iostream.h>
#include<conio.h>
#include<string.h>
class cube
{
    public:
    int i,ans,b;

};
void main()
{
 clrscr();
 cube c;
 cout<<"enter your b value:";
 cin>>c.b;
 for(c.i=1;c.i<=c.b;c.i++)
 {

   c.ans=c.i*c.i*c.i;
   cout<<"\n "<< c.i<<" cube is="<<c.ans;

  }


 getch();
}