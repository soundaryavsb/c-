#include <iostream>
using namespace std;
class arya
{
	public:
	arya()
	{
		cout<<"the out put is"<<endl;
	}
	void disp()
	{
		cout<<"disp function\n";
	}
 ~arya()
 {
 cout<<"destroctor\n";
 }
};
int main() {
	arya ob;
	ob.disp();
	return 0;
}
