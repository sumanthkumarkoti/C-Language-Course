// Program to read a string and print in zigzag case
# include <stdio.h>
# include <string.h>
main()
{
    int i,len;
    char str[100];

    printf("\n Enter String : ");
    gets(str);

    printf("\n ");
    len=strlen(str);

    for (i=0;i<len;i++)
    {
        if (str[i]==' ')
            putchar(str[i]);
        if (i%2==0)
            putchar(toupper(str[i]));
        else
            putchar(tolower(str[i]));
    }
    printf("\n");
}
