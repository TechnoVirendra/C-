#include<iostream>
using namespace std;
void add(int x,int y);
void sub(int x,int y);
void mult(int x,int y);
void div(int x,int y);
void con(int ch,int num1,int num2);
int main()
{
	int num1,num2,ch;
	cout<<"1. Sum of Two Numbers \n2. Subtract of Two Numbers \n3. Multiply of Two Numbers \n4. Divide of Two Numbers \nChoice The Above option : ";
	cin>>ch;
	
	cout<<"Enter The Two Numbers : ";
	cin>>num1>>num2;
	con(num1,num2,ch);
	return 0;	
}
void add(int x,int y)
{
	cout<<"Sum of two Number = "<<x+y;
}
void sub(int x,int y)
{
	cout<<"Subtract of two number = "<<x-y;
}
void mult(int x,int y)
{
	cout<<"Multiply of two number = "<<x*y;
}
void div(int x,int y)
{
	cout<<"Divide of two number = "<<x/y;
}
void con(int ch,int num1,int num2)
{
	if(ch==1)
	add(num1,num2);
	else if(ch==2)
	sub(num1,num2);
	else if(ch==3)
	mult(num1,num2);
	else if(ch==4)
	div(num1,num2);
}
