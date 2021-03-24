#include<stdio.h>
int sumarray(int arr1[],int size)
{
    int *p,sum=0,i;
    printf("value of %d",size);
    //  p=&arr1[0];
    for(p=arr1;p< (arr1+size);++p)
    {

        sum+=*p;
        
    }
    // printf("%d",sum);
    return sum;
}
int main()
{
    int arr2[4],d;
    printf("enter the element of array:\n");
    for(int i =0;i<4;++i)
    {
      printf("arr2[%d]:" ,i);
      scanf("%d",&arr2[i]);  
    }
    d=sumarray(arr2,sizeof(arr2)/sizeof(int));
    printf("sum of array is %d",d);  
    return 0;
}