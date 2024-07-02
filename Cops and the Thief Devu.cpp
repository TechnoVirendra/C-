#include<iostream>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	while(testcase--){
		int m,x,y;
		cin>>m>>x>>y;
		int arr[100]={0};
		while(m--){
			int a;
			cin>>a;
			for(int i=a;i<=(a+(x*y)) && i<=100;i++)
				arr[i]++;
			for(int i=a;i>=(a-(x*y)) && i>0; i--)
				arr[i]++;
		}
		int result = 0;
		for(int i=1;i<=100;i++){
			if(arr[i]==0)
				result++;
		}
		cout<<result<<endl;
	}
	return 0;
}
