#include<iostream>
using namespace std;
int main()
{ int entry_fee=15;
int snack_cost=30;
int total_price;
string students[15];
cout<<"how many students attend the GAME night (maximum 15)"<<endl;
int size;
cout<<"enter the number of students who want to attend"<<endl;
cin>>size;
if(size>15){
	
	cout<<"Display ERROR more than 15 students not allowed"<<endl;
}else
{
for(int i=0;i<=size-1;i++){
		
cout<<"enter the name of user:"<<i+1;	
cin>>students[i];
}
	for(int i=0;i<=size-1;i++){
	
	cout<<"user:"<<i+1<< students[i]<<endl;
	}
	
	int i;
	int sum=0;
	sum = entry_fee	+snack_cost;
	total_price+=sum;
	cout<<"user"<<i+1<<":"<<students[i]<<"\tTotal price"<<endl;
}{

cout<<"Total price"<<total_price<<endl;

}




return 0;

}