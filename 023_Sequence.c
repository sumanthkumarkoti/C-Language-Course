// Program the total expenditure of a household

# include <stdio.h>

main()

{
    int a,b,c,d,e;

    a=b=c=d=e=0;

    printf("\n");
    printf(" Groceries : Rs. ");
    scanf("%d",&a);
    printf("\n");
    printf(" Current Bill : Rs. ");
    scanf("%d",&b);
    printf("\n");
    printf(" House Rent : Rs. ");
    scanf("%d",&c);
    printf("\n");
    printf(" Gas Bill : Rs. ");
    scanf("%d",&d);
    printf("\n");
    printf(" Miscellaneous : Rs. ");
    scanf("%d",&e);

    printf("\n");
    printf(" Total Expenditure : Rs. %d",(a+b+c+d+e));
    printf("\n");
    getch();
}
