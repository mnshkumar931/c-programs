#include<stdio.h>

int main(){
    int a=6;
    int *ip=NULL;
    ip=&a;
    printf("a adress is: %p\n",&a);
    printf("adress of ip: %p\n",&ip);
    printf("value of ip is: %p\n",ip);
    printf("value of ip pointing to: %d\n",*ip);
    return 0;
}