#include <iostream>
using namespace std;
class dad
{
	public:
	dad()
	{
		cout<<"This is dad"<<endl;
	}
};
class mom
{
	public:
	mom()
	{
		cout<<"this is mom"<<endl;
	}
};
class child:public dad,mom
{
	public:
	child()
	{
			cout<<"this is child"<<endl;
	}
};
int main() {
	child obj;
	return 0;
}
