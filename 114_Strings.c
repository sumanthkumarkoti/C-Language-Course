// Program to print second word from inputted string
# include <stdio.h>
main()
{
    int i;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);
    printf("\n ");

    for (i=0;str[i]!=0;i++)
    {
        if (str[i]==' ')
        {
            i++;
            while (str[i]!=' ' && str[i]!='\0')
            {
                putchar(str[i]);
                i++;
            }
            break;
        }
    }
    printf("\n");
}
