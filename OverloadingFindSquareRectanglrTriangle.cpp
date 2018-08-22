

 #include<iostream>
 #include<math.h>
//#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int square,rectagle;
    float s,triangle;
    void func(int x)
    {
    	square=x*x;
        cout<<"Area of square"<<square<<endl;
        //cout << "value of x is " << x << endl;
    }
    void func(int l,int b)
    {
    	  rectagle=l*b;
        cout<<"Area of rectagle"<<rectagle<<endl;
       // cout << "value of x is " << x << endl;
    }
    void func(float x,float y,float z)
    {
    	s=(x+y+z)/2;
        triangle=sqrt(s*(s-x)*(s-y)*(s-z));
         cout<<"Area of triangle"<<triangle<<endl;
        //cout << "value of x and y is " << x << ", " << y << endl;
    }
};
int main() {
    Geeks obj1;
    obj1.func(7);
    obj1.func(2,4);
    obj1.func(2,3,4);
    return 0;
}
