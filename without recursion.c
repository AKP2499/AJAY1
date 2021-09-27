#include<stdio.h>
// with recursion
void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if (n>0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d",n3);
        printFibonacci(n-1);
    }
}
    int main(){ 
          int n;
        printf("enter the number of element:");
        scanf("%d",&n);
        printf("fibonacci series:");
        printf("%d %d",0,1);
        printFebonacci(n-2);
        return 0;
    }

}

