#include<stdio.h>
#include<stdlib.h>
int arr1[5],arr2[5],arr3[5];
int main(){
    
    int i;
printf("enter 1st aaray:\n");


for(i=0;i<5;i++){
    printf("\nenter  arr1 element\n");
    scanf("%d",&arr1[i]);
}

printf("enter 2nd array:");


for(i=0;i<5;i++){
    printf("\nenter arr2 element\n");
    scanf("%d",&arr2[i]);
}


    for(i=0;i<5;i++){
        arr3[i]=arr1[i]*arr2[i];
printf("the value of  is %d\n",arr3[i]);

    }
    return 0;
}
 