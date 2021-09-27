#include<stdio.h>
  int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10;
    printf("avg number is %f",avg);
     
     return 0;
}