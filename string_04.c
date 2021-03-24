#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    int i,count=0;
    printf("enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&& (str[i]>=65) && (str[i]<=90))
        count++;
    }
    printf("no of words in string are: %d",count);
    return 0;
}