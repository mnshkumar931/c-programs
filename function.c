#include<stdio.h>
int func(int val1,int val2){
    int res=val1+val2;
    return res;
}
int main(){
    int a=10;
    int b=34;
    int c=func(a,b);
    printf("the value of c is:%d\n",c);
    return 0;
}

