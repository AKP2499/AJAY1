main()
{
    int x=5,*j;
    j=&x;
    printf("%u\n",x,j);
    printf("%u\n",*j,&x);
    printf("%u\n",*&j);

}