#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per;
    printf("Enter Five Subject Marks :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("total = %d",total);
    per=total/5;
    printf("percentage =%f",per);
    return 0;
}

