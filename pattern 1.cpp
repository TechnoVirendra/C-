/*      	* * * * * * * * * 
			* * * *   * * * *
			* * *		* * *
			* *			  * *
			*      			*
			
*/
			
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Number of rowa And Columns :",cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n;j++)								
		{								   
			if(i<=j)
			cout<<" ";
			if(j<=i)
			cout<<" ";
			if(i<=j)
			cout<<"*";
			
		}
		cout<<"\n";
	}
	return 0;
}
