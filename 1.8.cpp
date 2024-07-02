#include<stdio.h>
struct video{
	char t[15];
	char l[10];
	char p[15];
	int y;
	
}v1;
int main()
{
	printf("Enter Title Language Production and Year :");
	scanf("%s%s%s%i",&v1.t,&v1.l,&v1.p,&v1.y);
	printf("Enter Title :%s\nLanguage :%s\nProduction :%s\nYear :%i",v1.t,v1.l,v1.p,v1.y);
	return 0;
	
}
