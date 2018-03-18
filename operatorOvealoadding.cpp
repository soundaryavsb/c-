#include <iostream>
using namespace std;
class test
{
	private:
	 int count=10;
	 public:
	 void operator --() //operator keyword denotes operator overlodding
	 {
	 	count=count+1;
	 }
     void display()
     {
     	cout<<"count"<<count;
     }
};
int main() {
test t;
--t;
t.display();
	return 0;
}
