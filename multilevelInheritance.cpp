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
class child:public dad
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
