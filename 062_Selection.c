// Program to read three values and display them in ascending order

# include <stdio.h>

main()

{
    float a,b,c;

    a=b=c=0;

    printf("\n Enter Value of 'a' : ");
    scanf("%f",&a);
    printf("\n Enter Value of 'b' : ");
    scanf("%f",&b);
    printf("\n Enter Value of 'c' : ");
    scanf("%f",&c);

    if (a>b && a>c && b>c)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",a,b,c);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",c,b,a);
    }

    else if (a>b && a>c && c>b)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",a,c,b);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",b,c,a);
    }

    else if (b>a && b>c && a>c)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",b,a,c);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",c,a,b);
    }

    else if (b>a && b>c && c>a)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",b,c,a);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",a,c,b);
    }

    else if (c>a && c>b && a>b)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",c,a,b);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",b,a,c);
    }

    else if (c>a && c>b && b>c)
    {
        printf("\n Descending Order is %.2f , %.2f , %.2f",c,b,a);
        printf("\n Ascending Order is %.2f , %.2f , %.2f",a,b,c);
    }

    printf("\n");
    getch();
}
