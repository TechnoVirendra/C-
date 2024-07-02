/*
Write a program in C to find the factorial of a given number using pointers.
*/
#include<stdio.h>
int main(){
  int i,f=1,*t,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
    *t = f;
//  printf("Factorial of %d is: %d",num,*t);
	printf("Factorial of %d is = %d",num,*t);
  return 0;
}
