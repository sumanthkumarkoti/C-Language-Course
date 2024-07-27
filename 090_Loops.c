// Program to read name of user and stop after user enters 'N'
# include <stdio.h>
# include <string.h>
main()
{
    int i=1,len=0;
    char name[100],opt;

    while (1)
    {
        printf("\n Enter Name : ");
        scanf("%s",&name);
        len=strlen(name);
        printf("\n Length of \"%s\" is %d.",name,len);
        printf("\n\n Do you wish to continue? (Y/N) : ");
        fflush(stdin);
        scanf("%c",&opt);
        opt=toupper(opt);
        if (opt=='N')
        {
            printf("\n");
            return;
        }
    }
}
