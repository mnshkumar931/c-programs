#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr1[100],n;
    printf("enter a number:");
    scanf("%d\n",&n);
    for(int i=0;n>0;i++)
    {
         arr1[i]=n%2;
         n=n/2;
    }
  
    printf("the value of binary is:");
    for(int i=1;i>=0;i--)
   {
      printf(" %d",arr1[i]);
    }
    return 0;
}