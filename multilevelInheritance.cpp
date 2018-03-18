#include <iostream>
using namespace std;
class arya
{
	public:
	arya()
	{
		cout<<"This is arya"<<endl;
	}
};
class arya1:public arya
{
	public:
	arya1()
	{
		cout<<"this is arya1"<<endl;
	}
};
class arya2:public arya1
{
	public:
	arya2()
	{
			cout<<"this is arya2"<<endl;
	}
};
int main() {
	arya2 obj;
	return 0;
}
