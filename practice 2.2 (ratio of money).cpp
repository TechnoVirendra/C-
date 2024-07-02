/*
Practical 5.1: There are n persons each have 25 paise coins, 50 paise coins and Rs1 coins in the ratio p:q:r but have different amounts stored in a single list.
 Find and print no. of 25 paise coins, 50 paise coins and 1 Rs coins each person have.
*/

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Number Of Person :");
	scanf("%d",&n);
	float amount[n],p,q,r;
	printf("Enter Amount of each Person :\n");
	for (i=0;i<n;i++)
	{
		printf("%d :",i+1);
		scanf("%f",&amount[i]);
	}
	for(r=1;r<=amount[0];r++)
	for(q=1;q<=amount[0];q++)
	for(p=1;p<=amount[0];p++)
	if((r*1+q*0.50+p*0.25)==amount[0])
	goto A;
	A:
	printf("Person    1 Rs   50 paise    25 paise\n");
	for(int i=0;i<n;i++){
	printf("%d %11.0f %7.0f  %11.0f \n",i+1,r*(amount[i]/amount[0]),q*(amount[i]/amount[0]),p*(amount[i]/amount[0]));}
	return 0;
}
