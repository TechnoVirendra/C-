#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,i;
    cin>>n>>m;
    array<ll , 2> A[n] , B[m];
    for (i=0;i<n;i++)
    {
        cin>>A[i][0]>>A[i][1];
    }
    for(i=0;i<m;i++)
    {
        cin>>B[i][0]>>B[i][1];
    }
    sort(A,A+n);
    sort(B,B+m);
    ll A_ptr = 0, B_ptr =0, FT = 0;
    while ((A_ptr <n) && (B_ptr < m))
    {
        int tempa, tempb;
        tempa = max(A[A_ptr][0],B[B_ptr][0]);
        tempb = min(B[B_ptr][1],A[A_ptr][1]);
        if(tempb > tempa)
        {
            FT = FT + tempb - tempa;
        }
        if(A[A_ptr][1]> B[B_ptr][1])
        {
            B_ptr +=1;
        }
        else
        {
            A_ptr += 1;
        }
    }
    cout<<FT<<endl;
    return 0;
}
