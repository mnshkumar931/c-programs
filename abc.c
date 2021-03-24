#include<stdio.h>
#include<string.h>
int main ()
{
    char word[20];
    int len;
    printf("\nenter a word:");
    gets(word);
    printf("\n%s",word);

    len=strlen(word);
    printf("\n%d",len);


    return 0;
}