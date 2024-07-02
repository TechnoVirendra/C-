/*
Create a structure hospital and include the following data members: 
o Name of patient
 o Patient id (as static)
 o Blood group 
o Contact number (long long) 
o Name of disease
 o Date of admission 

Including the functions to input and print the data for N number of patients.

*/
#include<stdio.h>
struct patient{
	char p_name[15];
	int p_id;
	char p_blood[2];
	long long contact;
	char p_disease[10];
	int doa;
	
};
void input(struct patient);
void print(struct patient);
int main()
{
	int n,i;
	printf("Enter the total patient :");
	scanf("%d",&n);
	struct patient p1;
	for (i=0;i<n;i++)
	input(p1);
	for (i=0;i<n;i++)
	print(p1);
}
void input(struct patient p1)
{
	printf("Enter the Name of patient :");
	scanf("%s",&p1.p_name);
	printf("Enter the Patient id :");
	scanf("%d",&p1.p_id);
	printf("Enter the Patient Blood group :");
	scanf("%d",&p1.p_blood);
	printf("Enter the Patient Contact Number :\n");
	scanf("%ld",&p1.contact);
	printf("Enter the Name of disease :\n");
	scanf("%s",&p1.p_disease);
	printf("Enter the Date of admission :\n");
	scanf("%d",&p1.doa);
}
void print(struct patient p1)
{
	printf("Name of patient : %s",p1.p_name);
	printf("Patient id : %d",p1.p_id);
	printf("Patient Blood group : %s",p1.p_blood);
	printf("Patient Contact Number : %ld",p1.contact);
	printf("Name of disease : %s",p1.p_disease);
	printf("Date of admission : %d",p1.doa);
	
}
