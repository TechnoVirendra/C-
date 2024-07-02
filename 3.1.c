/*
Practical 3.1: In a class of n students the boys to girls ratio is p:q. Find no. boys and girls in the class and print :
1)    If boys are more than or equal to 70% in the class then print gender partiality in education
2)    If difference of boys are girls is diff and in range -5<=diff<=5 then print equal opportunities of education for both
3)    If girls are more than equal to 70% then print girls dominating in education.
4)    For all others cases print no conclusion drawn
*/
#include<stdio.h>
int main()
{
   int n, p, q, b,b_per,g,g_per,d;

   printf("Enter the total number of students in the class\n");

   scanf("%d",&n);

   printf("Enter the ratio of boys to girls in the class\n");

   scanf("%d %d",&p,&q);

   b = n * p / (p+q);

   g = n - b;

   b_per = (b *100/n);

   g_per = (g *100/n);
   if (b==g)
     d = b - g;
    else if (b<g)
        d=g-b;
    else
        d=b-g;

   printf("\nNumber of boys in the class= %d\nNumber of girls in the class= %d\n",b,g);

   printf("\nPercentage of boys in the class= %d\nPercentage of girls in the class= %d\n",b_per,g_per);

   printf("\nDifference between girls and boys in the class is %d\n",d);

   if ((d >= -5) && (d <=5))

   printf("Equal Oppotunities of education are there for both boys and girls\n");

   else if (b_per >= 70)

   printf("There is gender partiality in education as boys percentage is %d\n",b_per);

   else if(g_per >= 70)

   printf("Girls are dominating in education as girls percentage is %d\n",g_per);

   else

   printf("There is no conclusion drawn from the given stats\n");

   return 0;

}

