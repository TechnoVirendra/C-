#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,i,t;
	cout<<"Enter the size of array =";cin>>n;
	int arr[n];
	int MinNo = INT_MAX;
	cout<<"Enter the Numbers "<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++){
		MinNo = min(MinNo,arr[i]);
		if(arr[i]==MinNo){
			t=i;
		}
	}
	cout<<"Smallest Number is ="<<MinNo<<endl<<"Position of Smallest Number is ="<<t<<endl;
	return 0;
}






/*
input the size of array.
take the  maximum integer value */





/*
STEP 1: - Start
STEP 2: - read n
STEP 3: - read MinNo to input maximum integer value.
STEP 4: - use for loop  to input array
STEP 5: - again use for loop to find the smallest number position.
STEP 6: - use min() to find the smallest number.
STEP 7: - check the condition if arr[i] is equal to MinNo to input the position of smallest number.
STEP 8: - Display smallest number and position.
STEP 9: - Stop
*/
