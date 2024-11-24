
#include<iostream>
using namespace std;
int main()
{
 int ticket_price=25;
int popcorn_price=20;
int total_cost;
string  students[10];
cout<<"how many user attend the qawali event"<<endl;
int n;
cout<<"enter number of attending event:";
cin>>n;
	if(n>10)
	{
		cout<<"dispaly error";
	}
	else{
	
	for(int i=0;i<=n-1;i++)
	
	{
		cout<<"enter name for user:"<<i+1;
		cin>>students[i];
}
	for(int i=0;i<=n-1;i++)
	{
		cout<<"user:"<<i+1<<students[i]<<endl;	
	}
	int i ;
	int sum=0;
	sum=ticket_price+popcorn_price;
	total_cost+=sum;
	{
	cout<<"user"<<i+1<<":"<<students[i]<<"total_price:"<<sum<<endl;
	
	}
}
return 
0;
}



