#include <iostream>
using namespace std;
class alpha
{
private:
int data1;
protected:
int data2=36;
public:
alpha()
{
	data1=99;
}
friend class beta;
};
class beta
{
	public:
	void func1(alpha obj)
	{
		cout<<"\ndata1="<<obj.data1;
	}
	void func2(alpha obj)
	{
cout<<"\ndata2="<<obj.data2;
	}
};
int main() {
alpha a;
beta b;
b.func1(a);
b.func2(a);
cout<<endl;
return 0;
}
