#include<stdio.h>
int arr1[3],arr2[3],arr3[3];
int main(){
    int i,j;
    printf("enter first array: ");
    
for(i=0;i<3;i++){
    printf("\nEnter value\n");
    scanf("%d",&arr1[i]);
}
printf("enter second array: ");
for(i=0;i<3;i++){
    printf("\nEnter value\n");
    scanf("%d",&arr2[i]);
}
    

//array addition
for(i=0;i<3;i++){
    arr3[i]=arr1[i]+arr2[i];
}
//final array
printf("The added array is :");
for(i=0;i<3;i++){
    printf("%d\n",arr3[i]);
}


return 0;
}


