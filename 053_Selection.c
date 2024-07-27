// Program to accept marks and display whether if passed or failed

#include <stdio.h>

int main()
{

    float total,avg;
    int c,cpp,java;

    printf("\n Enter the marks for C : ");
    scanf("%d", &c);
    printf("\n Enter the marks for CPP : ");
    scanf("%d", &cpp);
    printf("\n Enter the marks for JAVA : ");
    scanf("%d", &java);



    total = c+cpp+java;
    avg = total/3;

    if (c < 40 || cpp < 40 || java < 40)
    {
        printf("\n Failed in ");
        if (c < 40) printf(" C ");
        if (cpp < 40) printf(" CPP ");
        if (java < 40) printf(" JAVA ");
        return;
    }
    else
    {
        if (total>250)
            printf("\n\t\t\t\t\t\t CONGRATS!! You passed in FIRST Class.");

        else if (total>200)
            printf("\n\t\t\t\t\t\t CONGRATS!! You passed in SECOND Class.");

        else if (total>150)
            printf("\n\t\t\t\t\t\t CONGRATS!! You passed in THIRD Class.");
    }

    printf("\n Total Marks : %.2f",total);
    printf("\n Average Marks : %.2f",avg);

    printf("\n");
    getch();
}
