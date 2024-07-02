#include<iostream>
using namespace std;
int main(){
	char str[100];
	cin.getline(str,100);
	int v=0;
	for(int i=0;str[i]!='\0';i++){
		switch(str[i]){
			case 'a':
				case 'A':
					case 'e':
						case 'E':
							case 'i':
								case 'I':
									case 'o':
										case 'O':
											case 'u':
												case 'U': ++v;
		}
	}
	cout<<v<<endl;
	return 0;
}
