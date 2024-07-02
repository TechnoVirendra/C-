/*Practical 2.5: In a class of N students where girls and boys ratio is p:q Savita ranked rth from the top.
If there are m (m<r) boys ahead of Savita, how many girls are after her rank ?Also find whether she is among
 top 10 students of the class or not ?
*/

#include <stdio.h>
int main()
{
   printf("Taking class size as 80 and ratio of girls and boys in the class as 2:3\n");
   int x, m, r;
   printf("Enter rank of Savita:\n");
   scanf("%d",&r);
   again:
   printf("Enter value of no. of boys ahead Savita: \n");
   scanf("%d",&m);
   if(m<r)
   {
       x = m-r + 32; // x = m-r+ (2*80/2+5) and x is no. of girls behind savita
       printf("the number of girls behind Savita are: %d\n",x);
   }
   else
   {
       printf("There can be %d students in total and no. of boys could only be: %d",r,m-r);
       goto again;
   }
   return 0;
}
