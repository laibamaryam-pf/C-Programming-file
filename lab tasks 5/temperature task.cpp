#include<iostream>
using namespace std;
int main()
{int days=7;
double sum=0.0;
double temperature;
for(int i=0;i<days;i++){cout<<"enter temperature for day"<<(i+7)<<":";
cin>>temperature;
sum=sum+temperature;
} double average=sum/days;
cout<<"Average temperature of the week is:"<<average<<endl;


return 0;
}
