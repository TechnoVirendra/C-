/*
Practical 2.2: Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in 
bit-level. To perform bit-level operations in C programming, bitwise operators are used. Apply the knowledge you gained
while learning bitwise operators.Write a program to input two integers from user by using single scanf. 
Compute and display the value for a & b,a | b, a ^ b.
*/

#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter the values of a and b :");
   scanf("%d %d",&a, &b);
   printf("Output of a&b is %d", a&b);
   printf("\nOutput of a|b is %d", a|b);
   printf("\nOutput of a^b is %d", a^b);
   return 0;
}
