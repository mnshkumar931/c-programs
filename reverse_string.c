#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,len=0;
    printf("enter the str:");
    gets(str1);
    len=strlen(str1);
    printf("\n%d",len);
    
       for(i=len-1,j=0;i>=0,j<len;i--,j++)
        {   
          str2[j]=str1[i];
       }
        str2[len]='\0';
        printf("\n%s",str2);
    if(strcmp(str1,str2)==0)
    {
        printf("\nstring is palindrom:");
    }
    else
    {
        printf("\n string is not equal:");
    }
    
    return 0;


}