#include<iostream>
using namespace std;
   void temp_opinion(int temp){
	if(temp<=10){
	cout<<"cold";
	}
	else if(temp>=20 && temp<=30){
		cout<<"ok";
	}
    else if(temp>30){
    cout<<"hot";
	}
	else{
		cout<<"no information";
	}
}

int main()
{ int temp;
cout<<"enter a temperature"<<endl;
cin>>temp;
temp_opinion( temp);


return 0;
}
