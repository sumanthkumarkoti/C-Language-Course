// Program to read a string and convert into proper case
# include <stdio.h>
# include <string.h>
main()
{
    int i,len;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    len=strlen(str);

    for (i=0;i<len;i++)
    {
        if (str[i]>=65 && str[i]<=97)
            str[i]=tolower(str[i]);
        else
        if (str[i]==' ')
        {
            i++;
            if (str[i]>=97 && str[i]<=122)
                str[i]=toupper(str[i]);
        }
    }

    str[0]=toupper(str[0]);

    for (i=0;i<len;i++)
        printf("%c",str[i]);


    printf("\n");
}
