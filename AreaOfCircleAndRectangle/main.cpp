#include <iostream>

using namespace std;

int main()
{
  class area{
public:
       int circle(){
       int r;
       cout<<"Enter the redius of circle: ";
       cin>>r;
       cout<<"Area of circle: "<<3.144*r*r<<endl;
       }
       int rectangle(){
       int w,l;
       cout<<"Enter the  width: ";
       cin>>w;
       cout<<"Enter the lenth: ";
       cin>>l;
       cout<<"Area of rectangle: "<<w*l;
       }

  };
       area a;
       a.circle();
       a.rectangle();
}
