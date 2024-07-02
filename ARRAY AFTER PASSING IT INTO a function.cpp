//#include <stdio.h>
// 
//int main()
//{
//  int Array[50], i, Number;
// 
//  printf("\nPlease Enter Number of elements in an array  :  ");
//  scanf("%d", &Number);
// 
//  printf("\nPlease Enter %d elements of an Array \n", Number);
//  for (i = 0; i < Number; i++)
//   {
//     scanf("%d", &Array[i]);
//   }     
// 
//  printf("\n Elemenst in this Array are :\n");
//  for (i = 0; i < Number; i++)
//  {
// 	printf("%d\t", Array[i]);
//  }     
// 
//  return 0;
//}
//#include <stdio.h>
//void disp( int *num)
//{
//    printf("%d ", *num);
//}
//
//int main()
//{
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,11, 12,13,14,15,16,17,18,19,20};
//     for (int i=0; i<21; i++)
//         disp (&arr[i]);
//
//     return 0;
//}
//see a simple c example to swap two numbers without using third variable.

//#include<stdio.h>  
// int main()    
//{    
//int a, b; 
//printf("Enter First Number :");
//scanf("%d",&a);
//printf("Enter Second Number :");
//scanf("%d",&b);     
//printf("Before swap a=%d b=%d",a,b);      
//a=a+b;    
//b=a-b;  
//a=a-b;
//printf("\nAfter swap a=%d b=%d",a,b);    
//return 0;  
//}  

#include<stdio.h>
void fibonacciSeries(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;
}
