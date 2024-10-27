#include<iostream>
using namespace std;
int main()
{char op;
double num1,num2;
cout<<"enter operators +,-,/,* :";
cin>> op;
cout<<"enter two numbers num 1, num 2";
cin>>num1>>num2;
switch(op)
{case'+':
	cout<<num1<<"+"<<num2<<"="<<num1+num2;
	break;
	case'-':
	cout<<num1<<"-"<<num2<<"="<<num1-num2;
	break;
	case'*':
	cout<<num1<<"*"<<num2<<"="<<num1*num2;
	break;
	case'/':
		if(num2!=0)
	cout<<num1<<"/"<<num2<<"="<<num1 /num2;
	else
	cout<<"error! division by zero is not allowed";
	break;
	default:
		cout<<"invalid operator!";
		break;
return 0;
}



return 0;
}
