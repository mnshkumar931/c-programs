#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("enter a number:");
    scanf("\n%d",&num);
    for(i=2;i<=num/2;++i){
        if(num%i==0){
           flag=1;
           break;
        }
    }
    if(num==1){
        printf("1 is not a prime.");
    }
    else{
        if(flag==0)
        printf("%d is a prime number.",num);
        else
        printf("%d is a not prime number.",num);
    }
    return 0;
}
    
        
            
        
        
    

