// Program to date of birth and display lucky number and suitable gemstone
# include <stdio.h>
main()
{
    int a,no,sum;
    char Emerald,Ruby,Sapphire,Opal,Onyx,Amber,Moonstone,Topaz,Garnet,Aquamarine;

    a=no=sum=0;

    printf("\n Enter Date of Birth ( \"DDMMYYYY\" ): ");
    scanf("%d",&no);

    while (no!=0)
    {
        a=no%10;
        sum=sum+a;
        no=no/10;
    }
    if (sum>=10)
    {
        no=sum;
        sum=0;
        while (no!=0)
        {
            a=no%10;
            sum=sum+a;
            no=no/10;
        }
    }

    printf("\n Your Lucky Number is %d.",sum);
    switch (sum)
    {
        case 1:printf("\n Your Gemstone is Emerald."); break;
        case 2:printf("\n Your Gemstone is Ruby."); break;
        case 3:printf("\n Your Gemstone is Sapphire."); break;
        case 4:printf("\n Your Gemstone is Opal."); break;
        case 5:printf("\n Your Gemstone is Onyx."); break;
        case 6:printf("\n Your Gemstone is Amber."); break;
        case 7:printf("\n Your Gemstone is Moonstone."); break;
        case 8:printf("\n Your Gemstone is Topaz."); break;
        case 9:printf("\n Your Gemstone is Garnet."); break;
        default :printf("\n Your Gemstone is Aquamarine.");
    }

    printf("\n");
    getch();
}
