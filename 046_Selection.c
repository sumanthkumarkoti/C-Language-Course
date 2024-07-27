// Program to calculate Gross Salary and Net Salary and bonus from input Basic Salary,Allowances,Deductions

# include <stdio.h>

main()

{
    int bs,al,ded,exp;
    float gs,ns,bon;

    bs=al=ded=exp=gs=ns=0;

    printf("\n Enter Basic Salary : ");
    scanf("%d",&bs);
    printf("\n Enter Allowance : ");
    scanf("%d",&al);
    printf("\n Enter Deduction : ");
    scanf("%d",&ded);
    printf("\n Experience : ");
    scanf("%d",&exp);

    gs = bs + al;
    ns = gs - ded;

    if (exp>5)
        bon = ns * 3;
    else if (exp>3)
        bon = ns * 2;
    else
        bon = ns;

    printf("\n Gross Salary : %.2f",gs);
    printf("\n Net Salary : %.2f",ns);
    printf("\n Bonus : %.2f",bon);

    printf("\n");
    getch();
}
