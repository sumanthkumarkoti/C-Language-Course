// Program to display the view of each floor

# include <stdio.h>

main()

{
    int a;

    a=0;

    printf("\n");
    printf(" Enter Your Floor Number : ");
    scanf("%d",&a);

    if (a<0)
        printf("\a\n\t\t\t\t That's an Restricted Area , Authorized Personal Only. ");
    else
        if (a>50)
          printf("\a\n\t\t\t\t\t\t Sorry, We only have 50 Floors. ");
    else
        if (a%2 == 0)
          printf("\n\t\t\t\t\t\t You have a Beach View. ");
        else
          printf("\n\t\t\t\t\t\t You have a Forest View. ");

    printf("\n");
    getch();
}
