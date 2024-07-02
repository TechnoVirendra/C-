#include "iostream"
using namespace std;
int main()
{
	cout<<"Type 'A' initialize the college account with Rs. 200/-"<<"\n"<<"Type 'B' initialise the hostel account with Rs. 200/-"<<"\n";
	char ch;
	cout<<"Type (A or B) : ";
	cin>>ch;
	if(ch=='A')
	cout<<"Initialize the College Account with Rs. 200/-";
	else if(ch=='B')
	cout<<"Initialise the hostel Account with Rs. 200/-";
	return 0;	
} 
