#include<stdio.h>
int main()
{
  int age,marks;
  printf("enter your age\n");
  scanf("%d",&age);
  printf("enter your marks\n");
  scanf("%d",&marks);
  switch (age)
  {
  case 1:
      printf("the age is 3\n");
      break;
   case 12:
     printf("the age is 12\n");
     break;
   case 3:
     printf("the age is 24\n");
  
  default:
   printf(" Age just a number ");
      break;
  }

  
    
    return 0;
}
