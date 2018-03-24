#include <iostream>
using namespace std;
class Bajaj
{
protected:
int millage;
public:
void setmillage(int a)
{
millage=a;
}
};
class pulsar:public Bajaj
{
	public:
	void run()
	{
		cout<<"pollathavan pulsar :"<<millage<<" km-pl"<<endl;
	}
};
class discover:public Bajaj
{
	public:
	void run()
	{
		cout<<"millage king discover!!!"<<millage<<"km_ pl"<<endl;
	}
};
int main() {
/*pulsar p;
discover d;
d.setmillage(85);
p.setmillage(55);
d.run();
p.run();*/
pulsar p;
discover d;
Bajaj *b1 = &p;//object name *b1 is point out the pulsar object's address &p
Bajaj *b2 = &d;
b1->setmillage(50);//-> dereference operator
b1->setmillage(85);
p.run();
d.run();
	return 0;
}
