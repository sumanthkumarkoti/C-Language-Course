// Program to calculate the total income of a house hold

# include <stdio.h>

main()
{
    int a,b;

    a=b=0;

    printf("\n");
    printf(" Enter Father's Income : Rs. ");
    scanf("%d",&a);
    printf("\n");
    printf(" Enter Mother's Income : Rs. ");
    scanf("%d",&b);

    printf("\n");
    printf(" Total Income is Rs. %d",(a+b));

    printf("\n");
    getch();
}
