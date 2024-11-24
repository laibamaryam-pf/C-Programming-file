#include<iostream>
using namespace std;
int main()
{int i ,j,n,fact;
cout<<"enter a number :";
cin>>n;
for(i =1;i<=n;i++)
{fact=1;
for(j=1;j<=i;j++)
fact*=j;
}

cout<<fact;


return 0;}
