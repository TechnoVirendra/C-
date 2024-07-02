#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x;
	float y,res;
	cin>>x;
	cin>>y;
	res = y;
	if(x%5==0)
	{
	  if(y-x-0.5 >=0.0)
	  {
	      res = y-x-0.5;
	  }
	}
	cout<<fixed<<setprecision(2)<<res;
	return 0;
}
