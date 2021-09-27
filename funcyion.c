
#include<stdio.h>
 void main()
{
    void add(void);
    void Iseven(void);

    add();
    Iseven();
}


void add()
{
int a,b,c;
printf("enter the number");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is %d\n",c);
}

 void Iseven()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a%2==0)
printf(" the number is even");
else
printf(" the number is odd");

}
