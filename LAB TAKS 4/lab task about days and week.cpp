#include<iostream>
using namespace std;
int main()
{
int day;
cout<<"enter a number to represent a days of week"<<endl;
cout<<"1-monday"<<endl;
cout<<"2-tuesday"<<endl;
cout<<"3-wednesday"<<endl;
cout<<"4-thursday"<<endl;
cout<<"5-friday"<<endl;
cout<<"6-saturday"<<endl;
cout<<"7-sunday"<<endl;
cout<<"enter your choice"<<endl;
cin>>day;
switch(day){
	case1:
		cout<<" monday:start of workweek"<<endl;
		break;
		case2:
			cout<<"tuesday:stay productive"<<endl;
			break;
			case3:
			cout<<"wednesday:mid week motivation"<<endl;
			break;
			case4:
			cout<<"thursday:almost the weekend"<<endl;
			break;
			case5:
				cout<<"friday:TGIF"<<endl;
				break;
				case6:
					cout<<"saturday:relax its saturday"<<endl;
					break;
					case7:
						cout<<"sunday:enjoy your sunday"<<endl;
						break;
						default:
							cout<<"wrong selection choose the number between 1 and 7 for a days of week"<<endl;
							break;
							return 0;
			
		
}

return 0;
}
