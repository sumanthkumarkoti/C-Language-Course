// Program to read a string and count the first character occurrence
# include <stdio.h>
# include <string.h>
main ()
{
    int i,c=0;
    char str[100],fc;

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    for (i=0;i<strlen(str);i++)
        str[i]=toupper(str[i]);
    fc=str[0];

    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==fc)
            c++;
    }

    printf("\n The Character '%c' or '%c' is repeated %d times.",fc,fc+32,c);
    printf("\n");
}
