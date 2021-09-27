#include<stdio.h>
void main()
{
    int a;
    int *p;
    int x;
    int y;
    int z;

printf("Bhsodike a is value dede");
scanf("%d",&a);
printf("aaa\n");
p=&a;
a=100;
printf("%d\n",*p);
x=500;
y=860;
z=a;
if(z>=500){
    printf("Bhosdi Wala ye hai %d",z);
}else if(z<900){
printf("TU BADI HAI %d",z);
}else{
printf("Value is %d",z);
}
}
