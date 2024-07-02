#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[3];
        for (int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        int minno = INT_MAX;
        int maxno = INT_MIN;
        for(int i=0;i<3;i++)
        {
            maxno = max(maxno,arr[i]);
            minno = min(minno,arr[i]);
        }
        if(arr[0] > minno && arr[1] < maxno )
            cout<<arr[2]<<endl;
        else if(arr[1] > minno && arr[2] < maxno)
            cout<<arr[0]<<endl;
        else if(arr[2] > minno && arr[0] < maxno)
            cout<<arr[1]<<endl;
        else if(arr[0] > minno && arr[2] < maxno)
            cout<<arr[1]<<endl;
        
        
    }
    
}