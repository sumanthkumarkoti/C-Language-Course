// Program to read mail id and validate it
# include <stdio.h>
# include <string.h>
main()
{
    int i,len;
    char mail[100],at='n',dot='n';

    printf("\n Enter Mail ID : ");
    scanf("%s",&mail);

    len=strlen(mail);

    for (i=0;i<len;i++)
    {
        if (mail[i]=='@')
        {
            at='y';
            break ;
        }
    }

    if (at=='y')
    {
        for (i=i+1;i<len;i++)
        {
            if (mail[i]=='.')
            {
                dot='y';
                break ;
            }
        }
        if (dot=='n')
        {
            printf("\a\n\t\t\t\t\t\tMail ID should contain '.'\n");
            return ;
        }
    }

    else
    {
        printf("\a\n\t\t\t\t\t\tMail ID should contain '@'\n");
        return ;
    }

    printf("\n\t\t\t\t\t\tMail ID Verified Successfully.");

    printf("\n");
}
