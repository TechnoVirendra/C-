/*Create a class called employee with the following details as variables within it.
1. Name of the employee (string)
2. Age (int)
3. Designation (string)
4. Salary (double)
Write a program to create array of objects for the same to access these. Also, make use of member functions to accept values and print the name, age, designation and salary. 
*/
using namespace std;
#include"iostream"
class Employee{
	char name[20];
	int age;
	char d[8];
	long sal;
	public:
		void GetData();
		void PutData();
};
void Employee::GetData()
{
	cout<<"\n\t Enter Employee Name :";
	cin>>name;
	cout<<"\n\t Enter Employee Age : ";
	cin>>age;
	cout<<"\n\t Enter Employee Designation : ";
	cin>>d;
	cout<<"\n\t Enter Employee Salary : ";
	cin>>sal;
}
void Employee::PutData()
{
	cout<<"\nEmployee Name : "<<name<<"\n Employee Age : "<<age<<"\nEmployee Designation : "<<d<<"\nEmployee Salary : "<<sal;
}
int main()
{
	Employee E[5];
	int i;
	for(i = 0;i<5;i++)
	E[i].GetData();
	for (i=0;i<5;i++)
	E[i].PutData();
	return 0;
}
