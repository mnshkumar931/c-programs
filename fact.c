#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("\nenter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;    
    }
    printf("the fact of number n is:%d\n",fact); 

return 0;

}