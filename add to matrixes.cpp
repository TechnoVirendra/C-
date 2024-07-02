#include<iostream>
using namespace std;
int main(){
	int n,i,j,m;
	cin>>n>>m;
	int mat1[n][m],mat2[n][m],mat3[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>mat1[i][j]>>mat2[i][j];
	}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat3[i][j]=mat1[i][j]+mat2[i][j];
			cout<<"sum of two matrix is "<<mat3[i][j];
		}
	}
	cout<<endl;
	return 0;
}
