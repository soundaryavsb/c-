#include <iostream>
using namespace std;
class parent
{
	public:
	int dad_age;
};
class child : public parent
{
	public:
	int son_age;

};

int main() {
child obj;
obj.dad_age=37;
obj.son_age=7;
cout<<"dad age "<<obj.dad_age<<endl;
cout<<"son age "<<obj.son_age;
	return 0;
}
