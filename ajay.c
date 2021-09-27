#include<stdio.h>
int (int,int,int);
void main()
{
    
    int s,x,y,z;
    printf("enter three number");
    scanf("%d%d%d",&x,&y,&z);
    s=multiplie(x,y,z);
    printf("the multiplie  is %d",s);
}
int multiplie( int a,int b,int c)
{
int d;
d = a*b*c;
return (d);
}