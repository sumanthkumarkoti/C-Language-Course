// Program to find the biggest of 4 numbers

# include <stdio.h>

main()

{
    float a,b,c,d;

    a=b=c=d=0;

    printf("\n");
    printf(" Enter 'a' value : ");
    scanf("%f",&a);
    printf("\n");
    printf(" Enter 'b' value : ");
    scanf("%f",&b);
    printf("\n");
    printf(" Enter 'c' value : ");
    scanf("%f",&c);
    printf("\n");
    printf(" Enter 'd' value : ");
    scanf("%f",&d);

    if (a>b && a>c && a>d)
    {
        printf("\n");
        printf(" Biggest Number is %.2f",a);
    }
     if (b>a && b>c && b>d)
    {
        printf("\n");
        printf(" Biggest Number is %.2f",b);
    }
     if (c>b && c>a && c>d)
    {
        printf("\n");
        printf(" Biggest Number is %.2f",c);
    }
     if (d>b && d>c && d>a)
    {
        printf("\n");
        printf(" Biggest Number is %.2f",d);
    }

    printf("\n");
    getch();

}
