#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[100];
    int flag=0;
    int i,j=0,count=0;
    printf("enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {  
        if(str[i]==' '&& str[i+1]!=' ' && count==0)
        {   
            printf("%d",i);
            if(isalpha(str[i+1])!=0 )
            {
               count++; 
            }
        }

        
         if(str[i]==' '&& str[i+1]!=' ' && count>0)
        {   
            printf("%d",i);
            if(isalpha(str[i+1])!=0)
            {
               count++;
            }
        }
        
        
        
       
    }
     printf("no of word is %d\n",count);
     return 0;
}