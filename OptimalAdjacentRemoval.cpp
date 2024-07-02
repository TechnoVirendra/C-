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
    cout<<st.size()<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        removeDuplicates();
    }
    return 0;
}