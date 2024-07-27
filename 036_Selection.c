// Program to calculate the profit or loss or no loss no profit

# include <stdio.h>

main()

{
    int a,b;

    a=b=0;


    printf("\n");
    printf(" Enter Cost Price : ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter Selling Price : ");
    scanf("%d",&b);

    if (b-a>0)
    {
        printf("\n");
        printf(" Heyy, You have made a profit of Rs . %d ",(b-a));

    }

    else if (b-a<0)
    {
        printf("\n");
        printf(" Oops!! You made a loss of Rs . %d ",(b-a));

    }

    else
    {
        printf("\n");
        printf(" Hmmm! No Profit ..... No Loss.....");

    }

    printf("\n");
    getch();
}
