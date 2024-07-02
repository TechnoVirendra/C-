/*
A salesman has n things to sale. The cost price of all n things is different out of which p
things he is selling on m% profit and n-p things he is going to sell on x% loss. Find his net 
profit or loss.


#include<stdio.h>
int main()
{
	int n,p,i;
	float m,x,pr=0,lo=0,to=0;
	printf("Enter Number of available Item for sale :\t"),scanf("%d",&n);float item[n];
	printf("Enter price of each Item :\n");
	for (i=1;i<=n;i++){printf("%d :",i),scanf("%f",&item[i]);}
	printf("Enter the Number of items sold in the profit :\t"),scanf("%d",&p);
	printf("Enter the percentage of profit :\t"),scanf("%f",&m);
	printf("Enter the Percentage of loss in remaining item :\t"),scanf("%f",&x);
	for (i=0;i<p;i++){ pr+=(m*item[i])/100;	}
	for (i=p;i<n;i++){ lo+=(x*item[i])/100;	}
	to=pr-lo;
	if(to>0){ printf("\nSalesman get Rs.%2f profit",to);}
	else if(to<0){printf("\nSalesman get Rs. %2f Loss",to*-1);	}
	else {printf("\nSalesman got neither profit nor loss !!!");	}
	return 0;
}*/

#include<stdio.h>

int main()
{
int n,p,i;
float m,x,profit=0,loss=0,total;
printf("Enter no of available item for sale : ");
scanf("%d", &n);
float item[n];
printf("\nEnter price of each item\n");
for(i=0;i<n;i++)
{
printf("%d : ",i+1);
scanf("%f",&item[i]);
}
printf("\nEnter the no of items sold in the profit : ");
scanf("%d",&p);
printf("Enter the percentage of profit : ");
scanf("%f",&m);
printf("\nEnter the percentage of loss in remaining item : ");
scanf("%f",&x);

for(i=0;i<p;i++)
{
profit+=(m*item[i])/100; 
}
for(i=p;i<n;i++)
{
loss+=(x*item[i])/100; 
}
total=profit-loss;
if(total>0)
printf("\nSalesman get Rs. %.2f profit",total);
else if (total<0)
printf("\nSalesman get Rs. %.2f loss",total*-1);
else
printf("\nsalesman got neither profit nor loss");
return 0;
}

