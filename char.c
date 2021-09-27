#include<stdio.h>
int main()
{
    int number;
    printf("enter the integar:");
    scanf("%d",&number);
    if (number%2==0)
    {
      printf("%d is an even integar.",number);
    }
     else{
     printf("%d is an odd integar.",number);
     }    


    return 0;
}
