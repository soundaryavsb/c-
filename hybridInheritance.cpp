#include <iostream>
using namespace std;
class grandfather
{
	public:
	grandfather()
	{
		cout<<"This is grandfather"<<endl;
	}
};
class dad:public grandfather
{
	public:
	dad()
	{
		cout<<"this is dad"<<endl;
	}
};
class child1:public dad
{
	public:
	child1()
	{
			cout<<"this is child1"<<endl;
	}
};
class child2:public dad
{
	public:
	child2()
	{
			cout<<"this is child2"<<endl;
	}
};
int main() {
	child1 ob;
	child2 obj;
	return 0;
}
