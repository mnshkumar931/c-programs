#include<stdio.h>
int main()
{
    int n=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for( int count=3;count<=n;count+=2)
    {
      int flag=0;
       for(i=2;i<count;i++)
      {
        
        if(count%i==0)
        {
          flag=1;
          break;
        }
      }
         if(flag==0)
         {
           printf("%4d",count);   
         }
     
    }
     return 0;
}