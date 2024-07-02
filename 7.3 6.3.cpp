/*
Practical 6.3: You store name of your friends in string array. You are given task to print name of your friend whose name start with particular character and after you find first name in the list you have stop searching and print name you search in the list.


Practical 7.3: Write a program to create functions for following

i         Input details of employee using input_data() (name, employee id, number of working days, date of joining, initial salary, contact number, designation, department)

ii       Calculate monthly salary using calc_salary()

iii     Display the monthly salary with deductions if any using display()


Practical 4.3: There are n customer of bank who took loan of different amounts (Entered by User) and for different time periods but same rate of interest. The interest is compounded annually find the total interest earned by bank from all n customers.


Practical 5.2: Write a program to perform various matrix operations Addition, Subtraction, Multiplication, Transpose using switch-case statement.

Practical 6.3: You store name of your friends in string array. You are given task to print name of your friend whose name start with particular character and after you find first name in the list you have stop searching and print name you search in the list.


Practical 7.2: Write a recursive function for computing factorial of a number. Write main to test its functioning.
*/


#include <stdio.h>

#include <stdlib.h>



//Global variables declaration

char name[50];

int emp_id;

int num_work_days;

char doj[10];

int salary;

long longcontact_num;

char designation[15];

char deptt[20];

int mon_salary;



//Functions declaration

void input_data(); 

void calc_salary();

void display();



int main()

{

	input_data();

	calc_salary();

	display();

	 return 0;

}



void input_data()

{

	printf("Enter name of the Employee:");

	scanf("%s", name);

	printf("Enter emp_id of the Employee:");

	scanf("%d", &emp_id);

	printf("Enter number of working days:");

	scanf("%d", &num_work_days);

	printf("Enter date of joining:");

	scanf("%s", doj);

	printf("Enter salary:");

	scanf("%d", &salary);

	printf("Enter contact_num:");

	scanf("%lld", &contact_num);

	printf("Enter designation:");

	scanf("%s", designation);

	printf("Enter deptt:");

	scanf("%s", deptt);



	printf("\nName is:%s",name);

	printf("\nEmployee ID is:%d", emp_id);

	printf("\nNumber of working days are:%d", num_work_days);

	printf("\nDate of joining is:%s", doj);

	printf("\nSalary is:%d", salary);

	printf("\ncontact_num is:%lld", contact_num);

	printf("\ndesignation is:%s", designation);

	printf("\ndeptt is:%s", deptt);

}

void calc_salary()

{

	mon_salary=salary/30*num_work_days;

}

void display()

{

            

	printf("\n\nMonthly salary of %s is:%d",name,mon_salary);

}





#include <stdio.h>

int main()

{

           char name[30][15];

	   char ch;

	   int i,n,found=0;

	printf("Enter how many names you want to enter:");

	scanf("%d",&n);

	printf("Enter names of %d friends:",n);

	   for (i=0;i<n;i++)

	scanf("%s",name[i]);

           printf("Names are: ");

	   for (i=0;i<n;i++)

	printf("%s\n",name[i]); // display string

	printf("\nEnter first character of Name to be Searched: ");

	scanf(" %c",&ch);

	for(i=0;i<n;i++)

	   {

	       if(name[i][0]==ch)

	       {

	           found=1;

	           break;

	       }

	   }

	   if(found!=0)

	printf("Name with first character %c is: %s",ch,name[i]);

	   else

	printf("Name not found in array of given names");

	   return 0;

}
