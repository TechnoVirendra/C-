#include<bits/stdc++.h>
using namespace std;

int main(){
    int wd;
    cin>>wd;
    float ta;
    cin>>ta;
    float t = ta;
    if(wd%5==0 && ta>=(wd+0.5))
    {
        t=ta-wd-0.5;
    }
    cout.setf(ios::fixed);
    cout<<setprecision(2)<<t;
    return 0;
}