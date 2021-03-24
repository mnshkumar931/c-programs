#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3];
    int i,j;
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
            printf("%d ",arr1[i][j]);
            if(j==2)
            {
                printf("\n");
            }
            
        }
    }
    printf("transpose of arr1 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[j][i]=arr1[i][j];       
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d ",arr2[j][i]);
            if(i==2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}