#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[5],arr2[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf(" enter the element of arr1[%d]:",i);
        scanf("%d",&arr1[i]);
    }
    printf("reverse array is:");
    for(j=0,i=4;j<5,i>=0;j++,i--)
    {
         arr2[j]=arr1[i];
    }
    for(j=0;j<5;j++)
    {
        printf("%4d",arr2[j]);
    }
    return 0;
}
