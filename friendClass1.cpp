/*Create a class named 'Aircel' which contains a private Unique Port ID(UPID). Create another seperate class named 'Vodafone' which needs
to communicate somehow with Aircel class for obtaining that UPID in the case of MNP. Make sure that UPID is combination of Number and
Alphabet and should be minimum 7 characters in length. Design a C++ code for the above concept.*/
#include <iostream>
using namespace std;
class aircel
{
private:
char upId[7];
public:
aircel()
{
cin>>upId;
}
friend class vodaphone;
};
class vodaphone
{
	public:
	void func1(aircel obj)
	{
		cout<<"upId="<<obj.upId;
	}
};
int main() {
aircel a;
vodaphone b;
b.func1(a);
return 0;
}
