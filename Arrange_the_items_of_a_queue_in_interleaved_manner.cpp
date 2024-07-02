#include<bits/stdc++.h>
using namespace std;

void ArrangeInterleaved(queue<int> &q)
{
    int halfsize = int (q.size() / 2) ; 
    stack<int> st;
    for(int i=0;i < halfsize;i++)
    {
        st.push(q.front());
        q.pop();        
    }
    for(int i=0;i < halfsize;i++)
    {
        q.push(st.top());
        st.pop();
    }
    for(int i = 0 ;i < halfsize; i++)
    {
        q.push(q.front());
        q.pop();
    }
    for(int i =0 ;i < halfsize ; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
}


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    ArrangeInterleaved(q);
    int len = q.size();
    for(int i = 0; i< len; i++)
    {
        cout<<q.front() <<"   ";
        q.pop();
    }
    cout<<endl;
    return 0;
}