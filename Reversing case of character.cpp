#include<stdio.h>
#include<ctype.h>  // to use system defined function islower & toupper
int main()
{
	int c;
	printf("Enter Any character :");
	putchar('\n');		//to move next line
	c=getchar();	// getchar() = scanf()     // putchar() = printf()
	if(islower(c))		// islower() to check whether the character is lower or not.
	putchar(toupper(c));  // toupper() to convert the Lower character to Upper character.
	else //character is upper case	// when condition is no satisfy then it work.
	printf("%c",tolower(c));  //tolower() function to convert the Upper character to Lower character.
	return 0;	
}
