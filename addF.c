#include<stdio.h>
int add(int,int);
 int main()
{
    int x,y,s;
    printf("Enter the number");
    scanf("%d%d\n",&x,&y);
    s=add(x,y);
    printf("sum is %d\n");
}
   int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

