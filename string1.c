#include<stdio.h>
#include<string>
int main()
{
    char str[10];
    printf("Enter Any String :");
    scanf("%s",&str);
     for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;}

    printf("\nlower Case string is: %s",str);
   return 0;
}
