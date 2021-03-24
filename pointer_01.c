#include <stdio.h>
int main()
{
    int a=5;
    int *ptr=NULL;
    ptr=&a;
    *ptr+=5;

    printf("the adress of %p :\n",*ptr);
    printf("the value of a is %d\n",a);
    printf("the value ptr is pointed is %d\n ",*ptr);
    return 0;
}