
 #include<iostream>
 #include<math.h>
//#include <bits/stdc++.h>
using namespace std;
class volume
{
    public:
   
    
};
class cone:public volume
{
    public:
    void cone2( float r,float h1)
    {
        float cone1;
        cone1=(1/3.0)*3.14*r*r*h1;
        cout<<"cone volume="<<cone1<<endl;
    }
};
class cube:public volume
{
    public:
   void cube2(int a)
    {
        int cube1;
        cube1=a*a*a;
        cout<<"cube volume="<<cube1<<endl;
    }
};
class cuboid:public volume
{
    public:
    void cuboid2(int l,int b,int h)
    {
        int cuboid1;
        cuboid1=l*b*h;
        cout<<"cuboid volume="<<cuboid1<<endl;
    }
    
};
int main()
{
 
    int a,l,b,h;
    float r,h1,cone1;
    int cube1,cuboid1;
     cone c;
     cube cu;
     cuboid cb;
    cin>>r>>h1>>a>>l>>b>>h;
    
    c.cone2(r,h1);
    
    cu.cube2(a);
      
      cb.cuboid2(l,b,h);
      
    return 0;
}
