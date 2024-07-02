/*
Marks of group A having m students and group B having n students have

stored in two dynamically allocated arrays. Find the average aggregate marks of the whole

class.
*/
#include <stdio.h>

#include<stdlib.h>



int

main ()

{

 int n, m;

 printf ("enter the no. of students in group A :");

 scanf ("%d", &n);

 printf ("enter the no. of students in group B :");

 scanf ("%d", &m);



  

 int *aar1 = (int * ) malloc (n * sizeof (int));

 int *aar2 = (int * ) malloc (m * sizeof (int));



 printf ("enter marks of group A students:");

 for (int i = 0; i < n; i++)

  {

   scanf ("%d", &aar1[i]);

  }

  

  printf("enter marks of group B students:");

  for(int i =0;i<m;i++)

  {

    scanf("%d",&aar2[i]);

  }

  float sum=0;

  for (int i=0; i<n; i++)

  {

    sum=sum+aar1[i];

  }

  for (int i=0; i<m; i++)

  {

    sum=sum+aar2[i];

  }

  float average= sum/(m+n);

   

  printf("average marks: %f",average);



 return 0;

}
