#include<iostream>
using namespace std;
int swap_numbers(int a,int b)
{a=2;
 b=8;
int temp=a;
a =b;
b=temp;
cout<<"the value after swap of a:"<<a<<endl;
cout<<"the value after swap of b:"<<b<<endl;
}
int main()

{int a =4;
int b=5;
swap_numbers(a,b);


return 0;
}
