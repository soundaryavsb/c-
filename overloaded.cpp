#include <iostream>
using namespace std;
class arya
{
	public:
	arya()
	{
		cout<<"the out put is\n";
	}
 arya(int a,int b)
 {
 	int c;
 	c=a+b;
 	cout<<c;
 }
};
int main() {
	arya ob;
	arya obj(35,45);
	return 0;
}
