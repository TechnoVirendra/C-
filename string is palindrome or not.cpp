#include<iostream>
using namespace std;
int main(){
	int i,j;
	char str[80];
	cin.getline(str,80);
	for(i=0;str[i] !='\0';i++);
	int flag=1;
	for(int k=0,j=i-1;k<i/2;i++,j--)
	{
		if(str[k]!=str[j])
		{
			flag=0;
			cout<<str<<endl;
			break;
			
		}
	}
	if(flag==1)
	cout<<"string is palindrome!"<<str;
	else
	cout<<"string is not palindrome!"<<str;
	return 0;
}
