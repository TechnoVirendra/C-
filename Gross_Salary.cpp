#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        float data;
        cin>>n;
        if(n<1500)
        {
            data = n + (n*0.1) + (n*0.9);
        }
        else
        {
            data = n + 500 + (n*0.98);
        }
        cout.setf(ios::fixed);
        cout<<setprecision(2)<<data<<endl; 
    }
    return 0;
}