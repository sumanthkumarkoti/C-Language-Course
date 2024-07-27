// Program to check whether input is a digit or not

# include <stdio.h>
main()
{
    int a,b;

    a=b=0;

    printf("\n Enter a number : ");
    scanf("%d",&a);
    printf("\n Enter another number : ");
    scanf("%d",&b);  

    if (a<b)
        printf("\n UP");
    else if (a>b)
        printf("\n DOWN");
    else
        printf("\n EQUAL");

    printf("\n");
    getch();
}
