#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int num ,cnt =0;
        cin>>num;
        while(num > 0)
        {
            int n = (num%10);
            if(n%4==0 && n/4 == 1 )
            {
                cnt++;
            }
            num /= 10;
        }
        cout<<cnt<<endl;
    }
    return 0;
    
}