#include"iostream"
using namespace std;
#include"cstring"
int main(){
	int i,j,k=0;
	char str[80],word[80];
	gets(str);
	strcat(str," ");
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			word[k]=str[i];
			k++;
		}
		else{
			while(k>0){
				cout<<word[--k];
			}
			cout<<str[i];
		}
	}
	cout<<endl;
	return 0;
}
