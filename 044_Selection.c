// Program to read marks and display grades

# include <stdio.h>

main()

{
    int m,p,c;
    float total,avg;

    m=p=c=0;

    printf("\n Enter Marks of Maths : ");
    scanf("%d",&m);
    printf("\n Enter Marks of Physics : ");
    scanf("%d",&p);
    printf("\n Enter Marks of Chemistry : ");
    scanf("%d",&c);

    total = m + p + c;
    avg = total / 3;

    if (avg>90)
        printf("\n\t\t\t\t\t\t \"Grade is 'A+'\" ");
    else if (avg>80 && avg<90)
        printf("\n\t\t\t\t\t\t \"Grade is 'A'\" ");
    else if (avg>70 && avg<80)
        printf("\n\t\t\t\t\t\t \"Grade is 'B+'\" ");
    else if (avg>60 && avg<70)
        printf("\n\t\t\t\t\t\t \"Grade is 'B'\" ");
    else if (avg>50 && avg<60)
        printf("\n\t\t\t\t\t\t \"Grade is 'C'\" ");
    else if (avg<50)
        printf("\a\n\t\t\t\t\t\t \"Grade is 'F'\" ");

    printf("\n");
    getch();
}
