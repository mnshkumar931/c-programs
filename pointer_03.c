#include<stdio.h>
int main()
{
    int *p=NULL,a,b,*pt=NULL,c;
    printf("enter the value of a:\n" );
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    p=&a;
    pt=&b;
    c=*p+*pt;
    printf("the value of c= %d",c);
    return 0;
}