#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int num,f=1,i;
        cin>>num;
        for(i=2;i<=num;i++)
        {
            f *= i;
        }
        cout<<f<<endl;
    }
    return 0;
    
}