// Program to display the costliest pen

# include <stdio.h>

main()

{
    int a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Cost of Reynolds Pen : Rs. ");
    scanf("%d",&a);
    printf("\n");
    printf(" Cost of Montex Pen : Rs. ");
    scanf("%d",&b);
    printf("\n");
    printf(" Cost of Parker Pen : Rs. ");
    scanf("%d",&c);
    printf("\n");

    if (a>b && a>c)
    {
        printf("\t\t\t\t\t\t $ Reynolds is Costliest $");
        printf("\n");
    }
    else if (b>a && b>c)
    {
        printf("\t\t\t\t\t\t $ Montex is Costliest $");
        printf("\n");
    }
    else if (c>a && c>b)
    {
        printf("\t\t\t\t\t\t $ Parker is Costliest $");
        printf("\n");
    }

    getch();
}
