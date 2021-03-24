#include<stdio.h>
int main()
{
    int arr1[10];
    int i,n,index,flag=0;
    printf("enter the array1: \n");
    for ( i = 0; i<10; i++)
    {
       printf("enter arr1[%d] element:",i);
       scanf("%d",&arr1[i]); 
    }
    printf("number to be find:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
      if(arr1[i]==n)
      {
          
          flag=1;
          index=i;
      }       
       
    }
    if(flag==1)
    {
        printf("number is at %d position :",index);
    }
    else{
        printf("number is not in arr1:");
    }
    return 0;
}