// Program to calculate Gross Salary and Net Salary from input Basic Salary,Allowances,Deductions

# include <stdio.h>

main()

{
    int bs,al,ded;
    float gs,ns;

    bs=al=ded=gs=ns=0;

    printf("\n");
    printf(" Enter Basic Salary : ");
    scanf("%d",&bs);
    printf("\n");
    printf(" Enter Allowance : ");
    scanf("%d",&al);
    printf("\n");
    printf(" Enter Deduction : ");
    scanf("%d",&ded);

    gs = bs + al;
    ns = gs - ded;

    printf("\n");
    printf(" Gross Salary : %.2f",gs);
    printf("\n");
    printf("\n");
    printf(" Net Salary : %.2f",ns);
    printf("\n");

    getch();

}
