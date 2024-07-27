// Program to read name and aadhar number and display messages for valid and invalid aadhar numbers
# include <stdio.h>
main()
{
    long long no,temp;
    int c=0;
    char name[100];


    printf("\n Enter Name : ");
    scanf("%[^\n]",&name);
    printf("\n Enter Aadhar number : ");
    fflush(stdin);
    scanf("%lld",&no);

    temp=no;

    while (no!=0)
    {
        no=no/10;
        c++;
    }

    no=temp;

    if (c==12)
        printf("\n Heyy! %s, Your Aadhar number is %lld is verified successfully.",name,no);
    else
        printf("\n Heyy! %s, Your Aadhar number is %lld is invalid,kindly recheck.",name,no);
    printf("\n");
    getch();
}
