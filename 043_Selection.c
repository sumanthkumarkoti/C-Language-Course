// Program to calculate the current bill of a consumer

# include <stdio.h>

main()

{
    int id,units;
    char name[20];
    float bill,net,sur,rate;

    id=units=bill=net=sur=rate=0;

    printf("\n Enter Customer ID : ");
    fflush(stdin);
    scanf("%d",&id);
    printf("\n Enter Customer Name : ");
    fflush(stdin);
    scanf("%s",&name);
    printf("\n Enter Units Consumed : ");
    fflush(stdin);
    scanf("%d",&units);

    if (units<0)
    {
        printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" \n ");
        return;
    }

    printf("\n Customer ID : %d",id);
    printf("\n Customer Name : %s",name);
    printf("\n Units Consumed : %d",units);



    if (units<199)
    {
        rate = 1.20;
    }

    else if (units>=200 && units<400)
    {
        rate = 1.50;
    }

    else if (units>=400 && units<600)
    {
        rate = 1.80;
    }

    else if (units>=600)
    {
        rate = 2.00;
    }


    bill = rate * units;

    if (bill<100)
    {
        printf("\a\n\t\t\t\t \"Bill Amount does not meet minimum requirements\" \n ");
        return;
    }

    if (units<400)
     printf("\n Bill Amount : Rs. %.2f",bill);
    else
    {
        sur = 0.15 * bill;
        net = sur + bill;
        printf("\n Bill Amount : Rs. %.2f",bill);
        printf("\n Surcharges : Rs. %.2f",sur);
        printf("\n Net Amount : Rs. %.2f",net);
    }

    printf("\n");
    getch();
}
