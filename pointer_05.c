#include<stdio.h>
int max(int *p,int *q)
{ 
    int m; 
    if(*p>*q){
       m= *p;
    }
       else{
       m= *q;
       }
}
int main()
{
    int a,b,c;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    max(&a,&b);
    printf("the max num is=%d", c);
    return 0;
}