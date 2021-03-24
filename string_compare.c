#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]; char str2[20];
    printf("enter the first str:");
    gets(str1);
    printf("enter the second str:");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
    printf("\nequal:");
    }
    else{
    printf("\n not equal:");
    }
    return 0;
}