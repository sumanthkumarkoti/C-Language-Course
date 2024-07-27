// Program to read the rating of 3 movies and display the hit movie according to the input

# include <stdio.h>

main ()

{
    int a,b,c;

    a=b=c=0;

    printf("\n");
    printf(" Enter Rating of KALKI : ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter Rating of PUSHPA : ");
    scanf("%d",&b);
    printf("\n");
    printf(" Enter Rating of OG : ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("\n");
        printf(" KALKI is a Hit Movie.");
    }

    else if (b>a && b>c)
    {
        printf("\n");
        printf(" PUSHPA is a Hit Movie.");
    }

    else if (c>b && c>a)
    {
        printf("\n");
        printf(" OG is a Hit Movie.");
    }


    printf("\n");
    getch();
}
