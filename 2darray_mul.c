#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr1[3][3],arr2[3][3],mul[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter element of arr1[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
      
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d",arr1[i][j]);
          if(j==2)
          {
          printf("\n");
          }
        }
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
         printf("enter the element of arr2[%d][%d]:",i,j);
         scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d",arr2[i][j]);
          if(j==2){
              printf("\n");
          }
        }
    }

     for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            mul[i][j]=0;
            for(k=0;k<3;k++)
            {
                mul[i][k]+=arr1[i][k]*arr2[k][i];   
            }

             
          
        }
        
    }

       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d",mul[i][j]);
          if(j==2){
              printf("\n");
          }
        }
    }

    return 0;
}