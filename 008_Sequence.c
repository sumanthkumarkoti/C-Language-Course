//Program to read days and convert it into years,months,weeks and days\

# include <stdio.h>

int main()

{

    int i,y,m,w,d;

    i=y=m=w=d=0;

    printf("\n");
    printf(" Enter No of days: ");
    scanf("%d",&i);

    y = i / 365;
    m = (i % 365) / 30;
    w = ((i % 365) % 30) / 7;
    d = (((i % 365) % 30)) % 7;


    printf("\n");
    printf(" Years: %d",y);
    printf("\n");
    printf(" Months: %d",m);
    printf("\n");
    printf(" Weeks: %d",w);
    printf("\n");
    printf(" Days: %d",d);
    printf("\n");


    getch();

}
