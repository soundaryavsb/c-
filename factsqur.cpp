#include<iostream.h>
#include<conio.h>
#include<math.h>
class arya
{
public:

void sqareroot()
{
int num;
float c;
cout<<"enter the number";
cin>>num;
c=sqrt(num);
cout<<"sqare root is "<<c;
}
void factorial()
{
long fact=1,i,num;
cout<<"enter the number";
cin>>num;
for(i=1;i<=num;i++)
{
fact=fact*i;
}
cout<<"factorial "<<fact;
}
};
 int main()
 {
 clrscr();
 int ch;
 cout<<"enter your choice.1 for squart root,2 for factorial";
 cin>>ch;
 arya s;
 switch(ch)
 {
 case 1:
 s.sqareroot();
 break;
 case 2:
 s.factorial();
  break;
 default:
 cout<<"Your choice is not in the condition";
 break;
 }
 getch();
 return 0;
 }
