// The macros can take function like arguments, the arguments are not checked for data type. 
#include <stdio.h>
#define INCREMENT(x) ++x
int main()
{
	char *ptr = "GeeksQuiz";
	int x = 10;
	printf("%s ", INCREMENT(ptr));
	printf("%d", INCREMENT(x));
	return 0;
}

