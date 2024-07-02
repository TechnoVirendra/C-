#include<stdio.h>

int main ()

{

int N,p,q,m,r,ratio,Num_girls,y,x;

printf("Enter the total no. of students " );

scanf ("%d",&N);

printf ("Enter the ratio p:q ") ;

scanf ("%d%d",&p,&q);



Num_girls=(p*N)/(p+q);

printf(" \nTotal no. of girls are :%d",Num_girls);

printf(" \nEnter savita's position(from top ) : " );

scanf("%d",&r);

printf(" \n Enter no. of boys ahead of her " );

scanf("%d",&m);

y=r-m-1;

printf(" \n No. of girls ahead of her %d ",y);

x=Num_girls-y;

printf(" \n No. of girls behind her %d ",x);

}
