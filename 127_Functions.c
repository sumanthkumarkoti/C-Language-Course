// Program to swap two numbers using functions
# include <stdio.h>
main ()
{
    void swap (int *a,int *b);
    int a,b;

    printf("\n Enter 'A' Value : ");
    scanf("%d",&a);
    printf("\n Enter 'B' Value : ");
    scanf("%d",&b);

    printf("\n Numbers before calling swap function : %d,%d",a,b);

    swap(&a,&b);

    printf("\n Numbers after calling swap function : %d,%d",a,b);

    printf("\n");
}

void swap (int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return ;
}
