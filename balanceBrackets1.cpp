#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cout<<"Insert Brackets :";
    cin>>st;
    int i = 0,cnt = 0;
    while(i < st.length())
    {
        if(st[i] == '(')
            cnt++;
        else if(st[i] == ')')
            cnt--;
        
        if(cnt < 0)
        {
            cout<<"Invalid Sequence"<<endl;
            return 0;
        }
        i++;
    }
    if(cnt == 0)
        cout<<"Valid Sequence \n";
    else
        cout<<"Invalid Sequence\n";

    return 0;
}