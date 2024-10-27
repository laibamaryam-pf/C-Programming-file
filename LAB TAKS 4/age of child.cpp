#include<iostream>
using namespace std;
int main()
{ int age;
cout<<"enter age"<<endl;
cin>>age;
if(age<0)
{cout<<"invalid age"<<endl;
}else if(age>=0 && age<=12)
{cout<<"child"<<endl;
}else if(age>=13 && age<=19)
{if(age==13)
{cout<<"just a teen"<<endl;
}else
{cout<<"teenager"<<endl;}
 if( age>=20 && age<=60)

{cout<<"adult"<<endl;}

else if(age>60)
{cout<<"senior citizen"<<endl;
}
}



return 0;
}
