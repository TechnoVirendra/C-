#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,sum = 0;
	    cin>>x>>y;
        sum = ((x*1)+(y*2));
	    if(x%2 == 0)
		{
			if (x == 0)
			{
				if(y%2 == 0)
				{
					cout<<"YES\n";
				}
				else
					cout<<"NO\n";
			}
			else
				cout<<"YES\n";
		}
	    else
	        cout<<"NO\n";
	}
	return 0;
}
