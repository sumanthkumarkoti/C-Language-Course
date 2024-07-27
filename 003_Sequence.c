//Program to calculate the amount to be given to the customer

# include <stdio.h>

int main()
{
    //variable declaration

    int p1,p2,amt;


    //variable initialization

    p1=0;
    p2=0;
    amt=0;

    //input statements

    printf("\n");
    printf(" Enter the amount paid by the customer: ");
    scanf("%d",&p2);
    printf("\n");
    printf(" Enter the Total Amount: ");
    scanf("%d",&p1);
    printf("\n");


    //logic or process

    amt = p2 - p1;


    //output statements

    printf(" Balance Amount to be return is: Rs.%d",amt);
    printf("\n");


    //Thank you message

    printf("\n");
    printf("                                              THANK YOU , VISIT US AGAIN.");
    printf("\n");
    printf("\n");

    getch();

    return 0;
}
