#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[] ={100,50,10,5,2,1};
    while(t--)
    {
        int N;
        cin>>N;
        int b = 0;
        for(int i=0;i<6;i++)
        {
            if(arr[i]<=N)
            {
                b += int(N/arr[i]);
                N =N%arr[i];
            }
            
        }
        cout<<b<<"\n";
        
    }
    return 0;
}