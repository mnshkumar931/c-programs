#include<stdio.h>
int main(){
    int n,reverse=0,original,remainder;
    printf("enter a number:");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(original==reverse)
        printf("%d number is palindrom",original);
    else
        printf("number is not palindrom",original);

         
    }

