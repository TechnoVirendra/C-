#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cntEven = 0, cntOdd = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cntEven++;
        }
        else
        {
            cntOdd++;
        }
    }
    if(cntEven > cntOdd)
    {
        cout<<"READY FOR BATTLE\n";
    }
    else
    {
        cout<<"NOT READY\n";
    }
}