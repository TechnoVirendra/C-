#include<iostream>
using namespace std;
int cube (int num){
    return num*num*num;}
float cube (float num){
    return num*num*num;}
int main()
{
    int num;
    float num1;
    cout<<"Enter a number to find its cube"<<endl;cin>>num;
    cout<<"The cube of the number "<<num<<" is "<<cube(num)<<endl;
    cout<<endl<<"Enter a number to find its cube"<<endl;cin>>num1;
    cout<<"The cube of the number "<<num1<<" is "<<cube(num1)<<endl;
    return 0;
}
// learn how to handle function overloading
/*
    Step 1: - Start
	Step 2: - read num
	Step 3: - then call cube() function and calculate the cube of num.
	Step 4: - display the cube of num.
	Step 5: - read num1
	Step 6: - then call cube() function and calculate the cube of num1.
	Step 7: - display the cube of num1.
	Step 8: - Stop.
*/
/*
ERROR ENCOUNTERED DURING PROGRAM EXECUTION: -
No Error.
*/
/*
Explain : -
input num then call cube(int) function to calculate the cube of num then dispaly the cube of number.
again input num1 then call cube(float) function to calculate the cube of num1 then dispaly the cube of number.
in this program i am using function overloading.
*/

