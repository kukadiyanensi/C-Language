#include<iostream.h>
#include<conio.h>
#include<string.h>
class constant
{
  public:
  char alpha,vowel;

};
void main()
{
 clrscr();
 constant c;
 cout<<"enter your alpha:";
 cin>>c.alpha;
 c.vowel=('a'||'e'|| 'i'||'o'||'u');
 if(c.vowel==(c.alpha))
 {
   cout<<"it is vowel";

 }
 else
 {
    cout<<"it is constant";

 }


 getch();
}