#include<stdio.h>

int main()
{
    int num=0;
    
    printf("\n Enter a number ");
    scanf("\n%d",&num);
    for(int i=3;i<=num;i+=2)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
                
               
            }
            

        }
        if(flag==0)
        {
            printf("\n%d",i);

        }
        
           
    }

    return 0;
}