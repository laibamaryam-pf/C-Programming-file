#include<iostream>
using namespace std;
int cube(int a)
{
	return a*a*a;
	
}

int main()

{int num;
do{
	cout<<"enter a number"<<endl;
	cin>>num;
	cout<<"taking cube"<<cube(num)<<endl;
}
while(num!=0);


return 0;
}
