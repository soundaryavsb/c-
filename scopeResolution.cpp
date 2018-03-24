#include <iostream>
using namespace std;
class sound
{
	private:
	int x;
	public:
	sound()
	{
	  x=10;	
	}
	void display();
};
void sound:: display()
{
	cout<<"x="<<x;
}
int main() {
     sound o;
     o.display();
	return 0;
}
