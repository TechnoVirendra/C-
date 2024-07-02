#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int n1,n2,sum = 0;
        cin>>n1;
        while(n1>0)
        {
            n2=n1%10;
            sum += n2;
            n1 /= 10;
        }
        cout<<sum<<"\n";
    }
    return 0;
    

}