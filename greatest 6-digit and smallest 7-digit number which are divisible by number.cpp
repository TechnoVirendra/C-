/*
Fine m greatest 6-digit and n smallest 7-digit number which are divisible by number p. Print these numbers on the screen.

#include<stdio.h>
int main()
{
	int p,i;
	printf("Enter Number :"),scanf("%d",&p);
	if(p>999999) printf("Not Possible"); else {for(i=999999;;i--){if(i%p==0){
		printf("%d is 6-digit greatest number divisible by %d\n",i,p);
		printf("%d is 7-digit smallest number divisible by %d\n",i+p,p);
	break;}}	} 
	return 0;
}*/
#include<stdio.h>
int main()
{
int p,i;
printf("Enter no : ");
scanf("%d",&p);
if(p>999999)
printf("Not possible");
else
for(i=999999;;i--)
{
if(i%p==0)
{
printf("%d is 6-digit greatest no divisible by %d\n",i,p);
printf("%d is 7-digit smallest no divisible by %d\n",i+p,p);
break;
}
}
return 0;
}

