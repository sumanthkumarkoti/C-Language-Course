// Program to read to passwords and check similiarities
# include <stdio.h>
# include <string.h>
main ()
{
    int i,len1,len2;
    char p1[100],p2[100],match;

    printf("\n Enter Password 1 : ");
    scanf("%s",&p1);
    printf("\n Enter Password 2 : ");
    scanf("%s",&p2);

    len1=strlen(p1);
    len2=strlen(p2);

    if (len1==len2)
    {
        for (i=0;i<len1;i++)
        {
            if (p1[i]==p2[i])
            {
                match='y';
            }
            else
            {
                match='n';
                break ;
            }
        }
        if (match=='y')
            printf("\n\t\t\t\t\t\tPasswords Match.");
        else
            printf("\a\n\t\t\t\t\t\tPasswords Do Not Match.");
    }
    else
        printf("\a\n\t\t\t\t\t\tPasswords Do Not Match.");

    printf("\n");
}
