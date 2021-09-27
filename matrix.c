#include<stdio.h>
  int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter 9 number for first matrix");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);

    printf("matrix a\n");

    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {

       printf("%d\t",a[i][j]);
       
     }
     printf("\n");
    }

    printf("enter 9 number for second matrix");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);

printf("matrix b \n");
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
       printf("%d\t",b[i][j]);
       
     }
     printf("\n");
    }

    printf("sum of matrix a and b \n");
    
    
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
       printf("%d\t",c[i][j]);
       
     }
     printf("\n");
    }
    return 0;

    
}