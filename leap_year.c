#include<stdio.h>
#include<stdlib.h>
int main()
{
 int year=0;
 printf("\nenter a year:\n");
 scanf("\n%d",&year);
 if((year%400==0)||(year%4==0 && year%100!=0))
 {
  //  if
  //  {
     printf("%d year is leap year:",year);
  //  }
  //  else{
  //    printf("%d year is not leap year:",year);
  //  }
      
 }
 else
 {
   printf("%d year is not leap year:",year);
 }
 return 0;
}