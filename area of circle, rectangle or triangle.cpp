//Program to calculate area of a circle, a rectangle or a triangle depending upon user's choice.
using namespace std;
#include<iostream>
#include<cmath>
int main()
{
	float r,l,b,a,c,area,s;
	int ch;
	cout<<"1. Area of  a circle \n2. Area of a Rectangle \n3. Area of a Triangle "<<endl;
	cin>>ch;
	if(ch==1)
	{
		cout<<"Enter the Radius : "<<endl;
		cin>>r;
		area=3.14*r*r;
		cout<<"The Area of a Circle is : "<<area<<endl;
	}
	else if(ch==2)
	{
		cout<<"Enter the Length and Breadth of Rectangle : "<<endl;
		cin>>l>>b;
		area=l*b;
		cout<<"The Area of a Rectangle is : "<<area<<endl;
	}
	else if(ch==3)
	{
		cout<<"Enter the three Sides of triangle : "<<endl;
		cin>>a>>b>>c;
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"The Area of a Triangle is : "<<area<<endl;
	}
	return 0;
}

/*
STEP 1: - START
STEP 2: - Read ch
STEP 3: - if(ch==1)
			Read r
			calculate area = 3.14*r*r
			print Area of a Circle
STEP 4: - else if(ch==2)
			Read l,b;
			calculate area=l*b
			print Area of a Rectangle.
STEP 5: - else if(ch==3)
			Read a,b,c
			calculate s=(a+b+c)/2
			calculate area =sqrt(s*(s-a)*(s-b)*(s-c))
			print Area of a Rectangle
STEP 6: - STOP
