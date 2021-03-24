#include<stdio.h>
#include<string.h>
int main()
{
    int i,len=0,count=0;
    char str[100],ch;
    printf("enter a string:");
    gets(str);
    printf("lenth of a string is %d\n:",strlen(str));
    printf("enter a character to be count:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';++i)
    {
      if(ch==str[i])
       ++count;
    }
   printf("total no of %c is=%d",ch,count);
}