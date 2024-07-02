using namespace std;
#include<iostream>
inline int largest(int x, int y)
{
	int r;
	r=(x>y)?x:y;
	return r;
}
int main()
{ 
	int x,y;
	cout<<"Enter the 1st number :"<<endl;
	cin>>x;
	cout<<"Enter the 2nd number :"<<endl;
	cin>>y;
	cout<<"\nLargest of two numbrers = "<<largest(x,y);
	return 0;
}

