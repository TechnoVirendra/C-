// Write a C++ program that inputs a student's marks in five subject (out of 100) and prints the percentage marks.
using namespace std;
#include<iostream>
int main()
{
	int i;
	float sum,arr[5];
	cout<<"Enter the Five Subjects marks : "<<endl;
	for(i=1;i<6;i++)
	{
		cin>>arr[i];
	}
	for (i=1;i<6;i++)
	{
		sum+=arr[i];
	}
	float p;
	p=(sum*100)/500;
	cout<<"Precentage of five subjects is :"<<p<<"%"<<endl;
	return 0;
}

/*
STEP 1: - START
STEP 2: - for(i=1;i<6;i++)
			read arr[i]
STEP 3: - for(i=1;i<6;i++)
			sum+=arr[i]
STEP 4: - calculate p=(sum*100)/500;
STEP 5: - Print the precentage  of five subjects.
STEP 6: - STOP. */
