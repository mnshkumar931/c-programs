#include<stdio.h>
int addition(int *p,int *q)
{
    int sum;
    sum=*p+*q;
}
int main()
{
    int c,d,e;
    printf("enter the value of c:\n");
    scanf("%d",&c);
    printf("enter the value of d:\n");
    scanf("%d",&d);
    addition(&c,&d);
    printf("the value of e= %d",e);
    return 0;

}