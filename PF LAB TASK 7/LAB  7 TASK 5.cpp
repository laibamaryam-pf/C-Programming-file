#include<iostream>
using namespace std;
int main()
{int i,j,n,sum;
cout<<"enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{sum=0;
for(j=1;j<=i;j++)
sum+=j;
}
cout<<sum;

return 0;
}
