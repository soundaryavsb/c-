#include <iostream>
using namespace std;

int main() {
	int a=10,*p;
	p=&a;
	cout<<" a="<<a;
	cout<<" *p="<<*p;
	cout<<" p="<<p;
	cout<<" &a="<<&a;
	
	return 0;
}
