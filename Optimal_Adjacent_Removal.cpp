#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--)
    {
        string s;   cin>>s;
        int len = s.size();
        int cnt = 0;
        for (int i = 0; i < len; i++)
        {
        	if(s[i]==s[i+1])
        		cnt = cnt;
        	else
        		cnt++;
		}
		cout<<cnt<<endl;		
    }
    return 0;
}
