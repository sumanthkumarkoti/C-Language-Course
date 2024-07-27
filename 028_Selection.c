// Program to calculate discount and display final ammount

# include <stdio.h>

main()

{
    int a;
    float b;

    a=b=0;

    printf("\n");
    printf(" Enter Original Price : Rs.");
    scanf("%d",&a);

    if(a>=25000)
    {
        printf("\n");
        printf("\t\t\t\t\t\t\t 'DISCOUNT is 10%%'");
        printf("\n");

        b = 0.1 * a;

        printf(" Total Amount : Rs. %.2f",b);

    }

    else
    {
        printf("\n");
        printf("\t\t\t\t\t\t 'DISCOUNT is 5%%'");
        printf("\n");

        b = 0.05 * a;

        printf(" Total Amount : Rs. %.2f",b);

    }

    printf("\n");
    getch();
}
