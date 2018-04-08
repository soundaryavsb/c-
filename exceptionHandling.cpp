#include <iostream>
using namespace std;

int main() {
	cout<<"Basic program on exception";
	try
	{
		int momage=45;
		int sonage=50;
		if( momage<sonage)
		{
			throw 404;
		}
	}catch(int x)
	{
		cout<<"\n mom can't be younger than son\nERROR CODE:"<<x;
	}
	return 0;
}
