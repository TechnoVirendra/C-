#include<stdio.h>
int main()
{
	char ch[40];
	
	fgets(ch,sizeof(ch),stdin);
	printf("Hello, World.\n");
	puts(ch);
	return 0;
}
