#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int num; cin>>num;
        int sum,first,last;
        last = num%10;
        int digits = (int)log10(num);
        first = (int)(num / pow(10, digits)); 
        sum = last+first;
        cout<<sum<<"\n";       
    }
    return 0;
}