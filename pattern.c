#include<stdio.h>
int main()
{
    int i,j,k=0,n;
    printf("enter number of num:");
    scanf("\n%d",&n);
    int tot = n;
    for(i=0;i<n;i++)
    {
       
        
       for(j=0;j<tot;j++)
        {
            printf(" ");
        }
       for(j=0;j<=i;j++)
        {
            printf("* ");
        }

  
        tot--;
        printf("\n");
        
    }
    return 0;
}
