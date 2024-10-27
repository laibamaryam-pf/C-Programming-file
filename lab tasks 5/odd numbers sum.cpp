#include<iostream>
using namespace std;
int main()
{int n ,sum=0,number=1;
cout<<"enter a integer";
cin>>n;
while(number<=n)
{sum+=number;
number+=2;
} cout<<"sum of all odd numbers between 1 and "<<n<<"is"<<sum<<endl;

return 0;
}
