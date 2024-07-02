#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n,q,l,r,x,l1,r1,mid,result;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
while(q--){
cin>>l>>r>>x;
result=-1;
l1=l-1;
r1=r-1;
while(l1<=r1){
mid=((l1+r1)/2);
if (a[mid]>=x){
result=mid;
r1=mid-1;
}
else{
l1=mid+1;
}
}
if (result==-1) cout<<"0\n";
else cout<<(r-result)<<"\n";
}
}