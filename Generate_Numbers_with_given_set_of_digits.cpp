#include<bits/stdc++.h>
using namespace std;

void GenerateNums()
{
    //input
    int d;
    cin>>d;
    int digits[d];
    for(int i=0;i<d;i++)
        cin>>digits[i];
    int n;
    cin>>n;

    //Implementation

    if(n <= d)
    {
        for(int i=0; i< n;i++)
            cout<<digits[i]<<"  ";
    }
    else
    {
        queue<int> q;
        for(int i = 0; i < d; i++)
            q.push(digits[i]);
        int inserted = d , printed = 0;
        while(printed < n)
        {
            int t = q.front();
            q.pop();
            cout<< t<<" ";
            printed++;
            if(inserted < n)
            {
                for(int i=0; inserted < n && i < d; i++)
                {
                    q.push(t * 10 + digits[i]);
                    inserted++;
                }
            }
        }
    }
}

int main()
{
    GenerateNums();
    return 0;
}