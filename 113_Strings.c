// Program to reverse the inputted string
# include <stdio.h>
# include <string.h>
main()
{
    int i,len=0;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);
    printf("\n ");

    len=strlen(str);

    for (i=len;i>=0;i--)
        putchar( str[i]);

    printf("\n");
}
