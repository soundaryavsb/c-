#include <iostream>
using namespace std;
class bajaj
{
	public:
	virtual void run()
	{
		cout<<"Default"<<endl;
	}
};
class pulsar:public bajaj
{
	public:
	void run()
	{
		cout<<"pulsar running "<<endl;
	}
};
class discover:public pulsar
{
	public:
/*	void run()
	{
		cout<<"discover is running "<<endl;
	}*/
};

int main() {
pulsar p;
discover d;
/*bajaj *b1=&p;
bajaj *b2=&d;*/
p.run();
d.run();
	return 0;
}
