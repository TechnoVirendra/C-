#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ld,rev=0;
        cin>>n;
        while(n>0)
        {
            ld = n%10;
            rev = (rev*10)+ld;
            n /= 10;
        }
        cout<<rev<<endl;
    }
    return 0;
}