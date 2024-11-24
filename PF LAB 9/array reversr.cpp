#include<iostream>
using namespace std;
int main()
  

{ 
//int arr[5] 
	int arr[5];
	// taking elements from the user
	cout<<"enter numbers";
	for(int i =0;i<5;i++)
	{
		cin>>arr[i];
	}
		cout<<"print numbers:"<<endl;
	for(int i=4;i>=0;i--)
	{
		
		cout<<arr[i]<<endl;
	}


return 0;
}
