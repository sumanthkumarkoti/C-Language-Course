//Program to split total bill amount along with tip among friends

# include <stdio.h>

main()

{
    int a,c,e;
    float b,d;
    const float t1 = 10;
    const float t2 = 5;


    a=b=c=d=e=0;

    printf("\n");
    printf(" Enter Total Bill Amount :");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter the TIP (5%% or 10%%) :");
    scanf("%f",&b);
    printf("\n");
    printf(" Enter Total Number of Friends :");
    scanf("%d",&c);


    if (b= 10)
    {
        e= (t1 * a) / 100;
        d= (a + e) / c;

        printf("\n");
        printf(" Each one have to Pay Rs. %.2f",d);
        printf("\n");
    }

    else if (b = 5)
    {
        e= (t2 * a) / 100;
        d= (a + e) / c;

        printf("\n");
        printf(" Each one have to Pay Rs. %.2f",d);
        printf("\n");
    }

    getch();
}
