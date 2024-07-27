//Program to calculate the total & average

# include <stdio.h>

int main()
{
    //variable declaration

    int m1,m2,m3,m4,m5;
    float total,avg;
    //variable initialization

    m1=0;
    m2=0;
    m3=0;
    m4=0;
    m5=0;
    total=0;
    avg=0;

    //input statements

    printf("\n");
    printf(" \t\t\t\t\t\t Enter Your Marks");
    printf("\n");
    printf(" English: ");
    scanf("%d",&m1);
    printf("\n");
    printf(" Sanskrit: ");
    scanf("%d",&m2);
    printf("\n");
    printf(" Math's: ");
    scanf("%d",&m3);
    printf("\n");
    printf(" Physics: ");
    scanf("%d",&m4);
    printf("\n");
    printf(" Chemistry: ");
    scanf("%d",&m5);
    printf("\n") ;


    //logic or process

    total = m1 + m2 + m3 + m4 + m5;
    avg = total/5;

    //output statement

    printf(" Total Marks: %.0f",total);
    printf("\n");
    printf("\n");
    printf(" Average: %.2f %%",avg);
    printf("\n");

    getch();


    return 0;
}
