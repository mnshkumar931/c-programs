#include<stdio.h>
int main(){
    int t1=0,t2=1,t3;
    int i,n;
    printf("\nenter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        
        t3=t1+t2;
        printf("%  d",t1);
        t1=t2;
        t2=t3;
    }
     return 0;
}