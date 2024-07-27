// Program to raed the prices of two phones and displays the costlier one

# include <stdio.h>

main()

{
    int a,b;

    a=b=0;

    printf("\n");
    printf(" Price of SAMSUNG Mobile : Rs.");
    scanf(" %d",&a);
    printf("\n");
    printf(" Price of VIVO Mobile : Rs.");
    scanf(" %d",&b);

    if (a>b)
    {
        printf("\n");
        printf("\t\t\t\t\t\t $ SAMSUNG is Costlier $");
    }

    else if (a<b)
    {
        printf("\n");
        printf("\t\t\t\t\t\t $ VIVO is Costlier $");
    }

    else
    {
        printf("\n");
        printf("\t\t\t\t\t\t Both are at Same Price");
    }

    printf("\n");
    getch();
}
