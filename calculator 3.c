#include <stdio.h>
#include<math.h>
int main()
{
    int a , b, choice;
    printf("Enter your choice:\n");
    printf("1.ADDITION\n2.SUBRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.SQUARE\n6.EVEN or ODD\n7.POSITIVE or NEGATIVE\n8.SQUARE ROOT\n9.CUBE\n10.EXIT\n");
    scanf("%d",&choice);
    
    if( choice <=4){
        printf("Enter 2 integer numbers\n");
        scanf("%d  %d", &a,&b);}
    if (choice>=5 && choice<=9 ){
            printf("Enter the integer numbers\n");
            scanf("%d", &a);}
    if (choice==10)
        printf("press enter to exit the program !!!!!");
        
            
    else{
            printf("Choose within the range!\n");
    }
       
            
    
    switch(choice){
        case 1:
        printf("%d +%d = %d\n",a,b,(a+b));
        break;
        case 2: printf("%d -%d = %d\n",a,b,(a-b));
        break;
        case 3: printf("%d x %d = %d\n",a,b,(a*b));
        break;
        case 4:
        if (b != 0)
        printf("%d /%d = %d\n",a,b,(a/b));
        else
        printf("ERROR\n");
        break;
        case 5: 
        printf(" square of %d  = %d\n",a,(a*a));
        break;
        case 6:
        if (a%2==0)
        printf("%d is even\n",a);
        else
        printf("%d is odd\n",a);
        break;
        case 7:
        if (a == '+')
        printf("%d is positive\n",a);
        else
        printf("%d is negative\n",a);
        break;
        case 8:
        printf("Square root %d =%f\n",sqrt(a));
        break;
        case 9:
        printf("Cube of %d =%d\n ",a*a*a);
        break;
        case 10:
        break;
        default:
        printf("INVALID OPERATION");
        break;
    }
    
    return 0;
}

