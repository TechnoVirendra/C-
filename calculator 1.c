/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

int main(void)
{       
    int a, b, result;
    char op; // to store the operator
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result =a*b;
            break;
        case '/':
            result = a/b;
            break;
        case 's':
            result = a*a;
            break;
        case 'c':
            result = a*a*a;
            break;
        case 'e':
            if(a%2==0)
                printf("Number is Even");
            else
                printf("Number is odd");
            break;
        case 'q':
            result=sqrt(a);
            break;
        case 'p';
            if (a=='+')
                printf("Number is postive");
            else
                printf("Number Is negative");
            break;
            
            
        
    }
    
    printf("Result = %d", result);
    
    return 0; // return 0 to operating system
}