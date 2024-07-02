/*
? Name of patient

? Patient id (as static)

? Blood group

? Contact number (long long)

? Name of disease

? Date of admission



Including the functions to input and print the data for N number of patients.
*/
#include<stdio.h>
struct patient{
	char p_name[15];
	int p_id;
	char p_blood[2];
	long int p_contact;
	char p_disease[10];
	int p_date;
};
void input(struct patient);
void print(struct patient);
int main()
{
	struct patient p1;
	int n,i;
	printf("Enter The Number of Patients :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	input(p1);
	for (i=0;i<n;i++)
	print(p1);	
}
void input(struct patient p1)
{
	printf("Enter Patient name :");
	scanf("%s",&p1.p_name);
	printf("Enter patient id :");
	scanf("%i",&p1.p_id);
	printf("Enter patient blood group :");
	scanf("%s",&p1.p_blood);
	printf("Enter patient contact number :");
	scanf("%ld",&p1.p_contact);
	printf("Enter patient Disease :");
	scanf("%s",&p1.p_disease);
	printf("Enter Date of admission :");
	scanf("%i",&p1.p_date);
}
void print(struct patient p1)
{
	puts("\nPatient name :",p1.p_name);
	puts("\npatient id :",p1.p_id);
	puts("\npatient blood group :",p1.p_blood);
	puts("\npatient contact number :",p1.p_contact);
	puts("\npatient Disease :",p1.p_disease);
	puts("\n Date of admission :",p1.p_date);
}
