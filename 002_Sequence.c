//Program to calculate the total bill for iPhone & Covercase
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
    printf("  Enter the price of iPhone: ");
    scanf("%d",&p1);
    printf("\n");
    printf("  Enter the price of Cover Case: ");
    scanf("%d",&p2);
    printf("\n");


    //logic or process

    amt = p1 + p2;


    //output

    printf("  Total Amount: Rs. %d",amt);


    //Thank u message

    printf("\n");
    printf("\n");
    printf("                                             THANK YOU , VISIT US AGAIN.");
    printf("\n");
    getch();
    return 0;

}
