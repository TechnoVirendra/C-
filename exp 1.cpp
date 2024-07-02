/*
Write  a C program to find out  year in which  Mr. kavi was born  from the following information  :
a)	Kavi is m years younger than his mother.
b)	Kavi’s brother who born in year y(1900<=y<=2019) is n years younger to his mother
c)	If kavi’s brother is reading in class r then On the basis of your common sense also predict 
       In which class Kavi is reading?
*/
/*
Step 1- Start
Step 2-Declare  m, y, n, r, yob and clas.
Step 3- Read  m, y, n, r.
Step 4- Calculate yob = y+m-n.
Step 5- Print value of yob
Step 6- if ( r <= 12 && r >= 1)  calculate clas= r+n-m else
	print The Value of r is outside the defined constraint
Step 7-if(clas<1)
	print Mr. Kavi is in Pre Primary.
	else if (clas>12)
	print Mr. Kavi is in College but class cannot be predicted.
	else
	print Mr. Kavi is in class clas.
Step 8- Stop
*/
#include<stdio.h>

int main()
{
    int m, y, n, r;
    printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): \n");
    scanf("%d %d %d %d",&m,&y,&n,&r);
    int yob, clas;
    yob = y+m-n;
    printf("\nMr. Kavi's Year of Birth is %d",yob);
    if ( r <= 12&& r >= 1)
    {
        clas = r+n-m;
        if(clas<1)
            printf("\nMr. Kavi is in Pre Primary");
        else if (clas>12)
            printf("\nMr. Kavi is in College but class cannot be predicted.");
        else
            printf("\nMr. Kavi is in class %d", clas);
    }
    else
        printf("\nThe Value of r is outside the defined constraint!");
    return 0;
}


