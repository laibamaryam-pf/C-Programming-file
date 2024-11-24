#include<iostream>
using namespace std;
int largest_integers(int &a,int &b,int &c){
	if(a>b&&a>c){
		return a;
	}
	else if(b>c&&b>a){
		return b;
	}
	else if(c>a&&c>a){
		return c;
	}
	else{
		cout<<"all are equal"<<endl;
		return -1;
	}	
	}
		






int main()
{ int x=40;
int y=43;
int z=45;
int largest=largest_integers(x,y,z);
cout<<"display largest numbers"<<largest<<endl;
cout<<"display largest numbers"<<largest_integers(x,y,z);


return 0;
}
