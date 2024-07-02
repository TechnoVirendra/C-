/*Practical 2.3: Write a C program to find out year in which Mr. Kavi was born from the following information.
a)    Kavi is m years younger than his mother.
b)    Kavi’s brother who born in year y(1900<=y<=2019) is n years younger to his mother
c)     If Kavi’s brother is reading in class r then On the basis of your common sense also predict
In which class Kavi is reading?          */

#include <stdio.h>
int main()
{
	int m, y, n, r;
	printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): ");
	scanf("%d %d %d %d",&m,&y,&n,&r);
	int y_o_b, class;
	y_o_b = y+m-n;
	printf("Mr. Kavi's Year of Birth is %d",y_o_b);
	if ( r <= 12 && r >= 1)
   {
      class = r+n-m;
      if(class<1)
        printf("\nMr. Kavi is in Pre Primary");
      else if (class>12)
        printf("\nMr. Kavi is in College but class cannot be predicted.");
    else
    printf("\nMr. Kavi is in class %d", class);
   return 0;
   }
	else
	printf("\nThe Value of r is outside the defined constraint!");
 return 0;
}
