/*
Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.

1 - Write a function to print the names of all the students having age 14.

2 - Write another function to print the names of all the students having even roll no.

3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
*/
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter the information of students:\n");

    
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
