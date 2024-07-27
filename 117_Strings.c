// Program to check given word is present in main string
# include <stdio.h>
# include <string.h>
main()
{
    char str[100],word[50],*result;

    printf("\n Enter Main String : ");
    scanf("%[^\n]",&str);

    printf("\n Enter Word to search : ");
    fflush(stdin);
    scanf("%s",&word);

    result=strstr(str,word);

    if (result)
        printf("\n Word exists.");
    else
        printf("\n Word does not exists.");

    printf("\n");
}
