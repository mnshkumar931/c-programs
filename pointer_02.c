#include<stdio.h>
void addition(int *b)
{
   int c= ++*b;
    b++;
    printf("the value of b is %d",c);
    printf("adress of b is %p",*b);
}
int main()
{
    int a=30;
 addition(&a);
 
 return 0;
}