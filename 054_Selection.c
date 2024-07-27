// Program to prepare electricity bill

# include <stdio.h>

main()

{
    int units=0;
    float bill,rate;
    char use;

    printf("\n Enter Units Consumed : ");
    scanf("%d",&units);
    printf("\n For which use is electricity used( [D]omestic / [C]ommercial ) : ");
    fflush(stdin);
    scanf("%c",&use);

    use=toupper(use);

    if (units<0)
    {
        printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" ");
        return;
    }

    if (use=='D' || use=='C')
    {
        if (use=='D')
            if(units<100)
              rate=100;
            if (units>100 && units<200)
              rate=1.50;
              bill=rate * units;
            if (units>200 && units<300)
              rate=3.00;
              bill=rate * units;
            if(units>=300)
              rate=5.00;
              bill=rate * units;

        if (use=='C')
            if(units<100)
              rate=150;
            if (units>100 && units<200)
              rate=2.50;
              bill=rate * units;
            if (units>200 && units<300)
                rate=4.50;
                bill=rate * units;
            if(units>=300)
                rate=7.50;
                bill=rate * units;

    }

    else
    {
        printf("\a\n\t\t\t\t\t\t \"INVALID INPUT\" \n ");
        return;
    }

    printf("\n Rate : Rs. %.2f",rate);
    printf("\n Bill Amount : %.2f",bill);

    printf("\n");
    getch();
}
