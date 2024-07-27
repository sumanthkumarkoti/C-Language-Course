// Program to read a string and print vowels in capitals and rest in lowwer
# include <stdio.h>
# include <string.h>
main ()
{
    int i;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    for (i=0;i<strlen(str);i++)
        str[i]=tolower(str[i]);

    for (i=0;i<strlen(str);i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            putchar(toupper(str[i]));
        else
            putchar(str[i]);
    }
    printf("\n");
}
