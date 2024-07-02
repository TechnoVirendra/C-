#include<bits/stdc++.h>
using namespace std;

void removeDuplicates()
{
    string s;
    cin>>s;
    stack<char> st;
    int  i =0;

    while(i < s.length())
    {
        if(st.empty())
            st.push(s[i]);
        else
        {
            if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        i++;
    }
    
    if(st.empty())
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}

int main()
{
    removeDuplicates();
    return 0;
}