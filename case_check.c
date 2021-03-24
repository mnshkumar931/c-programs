#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len=0;
    printf("enter a string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        { 
            printf("character is upper case:%c\n",str[i]);
        }   
          else if(str[i]>=97 && str[i]<=122)
         {
           printf("character is lower case:%c\n",str[i]);
         }
            else
            {
                printf("character is not valid:" );
            }

        
    }
    return 0;
}