/*
The Length and Breadth of a rectangle and Radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the
area and circumference of the circle. using function and structure.
*/
#include<stdio.h>
struct rectangle{
	int length;
	int breadth;
	int area;
	int perimeter;
}r1;
struct circle{
	int radius;
	float area;
	float circumference;
}c1;
void rect(struct rectangle);
void cir(struct circle);
int main(){
	printf("Enter length = ");
	scanf("%d",&r1.length);
	printf("Enter Breadth = ");
	scanf("%d",&r1.breadth);
	rect(r1);
	printf("\nArea = %d",r1.area);
	printf("\nPerimeter = %d",r1.perimeter);
	printf("\nEnter Radius = ");
	scanf("%d",&c1.radius);
	cir(c1);
	printf("\nArea = %f",c1.area);
	printf("\nCircumference = %f",c1.circumference);
	return 0;
}
void rect(struct rectangle)
{
	int a,p;
	r1.area=r1.length*r1.breadth;
	r1.perimeter=2*(r1.length+r1.breadth);	
}
void cir(struct circle)
{
	c1.area=3.14*c1.radius*c1.radius;
	c1.circumference=2*3.14*c1.radius;
}
