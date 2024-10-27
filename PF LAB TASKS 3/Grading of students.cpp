#include<iostream>
using namespace std;
int main()


{

int avg;
cout<<"enter a num: ";

cin>> avg;

if(avg>=90){
    cout<<"grade A"<<endl;
} 
else if(avg>=80){

cout<<" grade B"<<endl;
}

else if(avg>=70){
    cout<<"grade C"<<endl;
}
else if(avg>=60)
{cout<<"grade D"<<endl;
}
else 
{cout<<"grade F"<<endl;
}
return 0;
}
