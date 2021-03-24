#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,year,ci,total;
    printf("enter the principal amount:");
    scanf("%f",&principal);
    printf("enter the rate of interest:");
    scanf("%f",&rate);
    printf("enter year:");
    scanf("%f",&year);
    ci=principal*((pow((1+rate/100),year)-1));
    printf("the ci is %f\n",ci);
    total=principal+ci;
    printf("total amount is %f\n",total);
    return 0;
}