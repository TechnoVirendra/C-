#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,k,cnt =0;
    cin>>num>>k;
    while (num--)
    {
        int n1;
        cin>>n1;
        if(n1%k==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
    
}