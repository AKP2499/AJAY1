#include<stdio.h>
int main()
{
    int a,b ,sum;
    float avg;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
     sum=a+b;
     avg=(float)(a+b)/2;
     printf("\nsum of %d and %d is=%d",a,b,sum);
     printf("\navg of %d and %d is=%d",a,b,avg);
    return 0;
}
