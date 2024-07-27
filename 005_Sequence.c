//Program to read Basic Salary of an Employee and display Gross Salary and Net Salary

# include <stdio.h>

main()

{
    float bs,gs,ns,hra,da,pf;

    bs=gs=ns=hra=da=pf=0;

    printf("\n");
    printf(" Enter Your Basic Salary : ");
    scanf("%f",&bs);


    hra= 0.2 * bs;
    da= 0.1 * bs;
    pf= 0.5 * bs;
    gs= bs+hra+da;
    ns= gs - pf;

    printf(" Gross Salary: %f",gs);
    printf("\n");
    printf(" Net Salary: %f",ns);
    printf("\n");


    getch();

    return 0;
}
