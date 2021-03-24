#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr1[2][2]= {{1,2},{3,4}};
    int a,b;
    printf("enter the row:");
    scanf("%d",&a);
    printf("enter the column:");
    scanf("%d",&b);
    printf(" %d\n",arr1[a][b]);

     for(int i=0;i<2;i++){
      for(int j=0;j<2;j++)
         {
           printf(" arr1[%d][%d]\n",arr1[i][j]);
        }
     }        
         
    
return 0;
}


