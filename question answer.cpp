/*
Practical 9.1: Create a structure hospital and include the following data members:



? Name of patient

? Patient id (as static)

? Blood group

? Contact number (long long)

? Name of disease

? Date of admission



Including the functions to input and print the data for N number of patients.*/

#include<stdio.h>
struct patient{
	char name[15];
	int patient_id;
	char group[2];
	int contact;
	char disease[10];
	int DOA;
}patient[5];
void Addpatient(){int n;
	printf("Enter Number of patient :"),scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("...........................................................................................\n");
		printf("\t patient name = "),scanf("%s",&patient[i].name);
		printf("\t patient_id = "),scanf("%d",&patient[i].patient_id);
		printf("\t Blood Group = "),scanf("%s",&patient[i].group);
		printf("\t Contract Number = "),scanf("%d",&patient[i].contact);
		printf("\t Disease = "),scanf("%s",&patient[i].disease);
		printf("\t Date of Admission = "),scanf("%d",&patient[i].DOA);
		printf("\n............................................................................................\n");
	}
}
void printpatient(){int n;
	printf("Enter Number of patient :"),scanf("%d",&n);
	printf("\t\tPatient Record : \n\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\t patient name = ",patient[i].name);
		printf("\n\t patient_id = ",patient[i].patient_id);
		printf("\n\t Blood Group = ",patient[i].group);
		printf("\n\t Contract Number = ",patient[i].contact);
		printf("\n\t Disease = ",patient[i].disease);
		printf("\n\t Date of Admission = ",patient[i].DOA);
		printf("\n............................................................................................\n");
		
	}
}
int main()
{
	Addpatient();
	printpatient();
	
	return 0;
}
