#include<iostream>
using namespace std;
int main()

{

// varaiables
float length,width,area,perimeter;

//
cout<<"length of rectangle = ";

cin>>length;
cout<<"width of rectangle = ";

cin>>width;

area=length*width;
perimeter=2*(length+width);

cout<<"display area="<<area<<endl;
cout<<"diplay perimeter="<<perimeter<<endl;

return 0;
}
