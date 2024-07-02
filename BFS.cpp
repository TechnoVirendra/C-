#include<bits/stdc++.h>
using namespace std;

vector<bool> v;
vector<vector<int>> g;

void edge(int a, int b)
{
    g[a].push_back(b);
}
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    v[u] = true;

    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        cout<<f<<"  ";

        //ENQUEUE ADJACENT.

        for(auto i = g[f].begin(); i != g[f].end(); i++)
        {
            if(!v[*i])
            {
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    v.assign(a , false);
    g.assign(a , vector<int>());

    int c,d,i;
    for(i = 0; i< b;i++)
    {
        cin>>c>>d;
        edge(c,d);
    }

    for(i =0 ;i < a; i++)
    {
        if(!v[i])
        {
            BFS(i);
        }
    }
    return 0;
}