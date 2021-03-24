#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,r1,r2,realpart,imgpart;
    float d;
    printf("\nenter the value of a,b,c:\n");
    scanf("\n%4f \n%4f \n%4f",&a,&b,&c);
    d = (b*b)-(4*a*c);
    if(d>0)
    {
       r1= (-b+sqrt(d))/(2*a);
       r2= (-b-sqrt(d))/(2*a);
       printf(" r1=%f and r2=%f:",r1 ,r2);
    }
    else if(d==0)
        {
           r1=r2= -b/(2*a);  
           printf("r1=%f and r2=%f :", r1,r2);
        }

   else{
        realpart= -b/(2*a);
        imgpart= sqrt(-d)/(2*a);
        printf(" the value of realpart is :%4f\n and imgpart is: %4f\n ", realpart,imgpart);
    }
    return 0;
}
