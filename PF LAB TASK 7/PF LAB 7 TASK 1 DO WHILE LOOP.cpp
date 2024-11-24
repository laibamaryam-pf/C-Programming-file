#include<iostream>
using namespace std;
int main()
{int r=8;
 int size;
cout<<"enter size";
cin>>size;
do
    {
        int c = 0;
        do
        {
            cout << "*";
            c++;
        } while (c < size);
        cout << endl;
    
    } while(r < size);
        r++;
    return 0;


}
