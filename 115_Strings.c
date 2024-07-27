// Program to generate username from inputted mail id
# include <stdio.h>
main()
{
    int i;
    char mail[100],un[100];

    printf("\n Enter Mail ID : ");
    scanf("%[^\n]",&mail);

    for (i=0;mail[i]!='@';i++)
    {
        if (mail[i]==' ')
        {
            printf("\a\n\t\t\t\t\t\tSpaces are not allowed.\n");
            return;
        }
    }

    for (i=0;mail[i]!='\0' && mail[i]!='@';i++)
        un[i] = mail[i];
    un[i]='\0';

    if (mail[i]!='@')
    {
        printf("\n\t\t\t\t\tInvalid email ID. '@' symbol is missing.\n");
        return ;
    }

    printf("\n Username : %s",un);

    printf("\n");
}
