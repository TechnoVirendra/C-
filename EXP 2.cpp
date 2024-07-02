/*
In a class of n students the boys to girls ratio is p:q. Find no. boys and girls in the class and print :
1)	If boys are more than or equal to 70% in the class then print gender partiality in education 
2)	If difference of boys are girls is diff and in range -5<=diff<=5 then print equal opportunities of education for both 
3)	If girls are more than equal to 70% then print girls dominating in education.
4)	For all others cases print no conclusion drawn*/
#include<stdio.h>
int main()
{
    int p,q,n,b,bp,g,gp,d;
    printf("Enter the total number of students in class :\t");
    scanf("%d",&n);
    printf("Enter the ratio of boys and girls in the class :\t");
    scanf("%d%d",&p,&q);
    b=n*p/(p+q);
    g=n-b;
    bp=(b*100/n);
    gp=(g*100/n);
    printf("\nNumber of boys in the class =%d\nNumber of girls in the class=%d\n",b,g);
    printf("\nPercentage of boys in the class=%d\nPercentage of Girls in the class=%d\n",bp,gp);
    if ((g==b)||(b>g))
    {
        d=b-g;
        printf("\nDifference between girls and boys in the class is %d",d);
    }
    else{
        d=g-b;
        printf("\nDifference between girls and boys in the class is %d",d);
    }
     if((d>=-5)&&(d<=5))
            printf("Equal Opportunities");
     else if(bp>=70)
        printf("There is gender partiality in education as Boys percentage is %d\n",bp);
     else if(gp>=70)
        printf("There is gender partiality in education as Girls percentage is %d\n",gp);
     else
        printf("\nno conclusion");
     return 0;
}

