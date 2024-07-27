// Program to read name and display it in specific pattern
# include <stdio.h>
# include <String.h>
main ()
{
    int i,j;
    char name[100];

    printf("\n Enter Name : ");
    gets(name);

    for (i=0;i<strlen(name);i++)
    {
        for (j=0;j<=i;j++)
            printf("%c ",name[j]);
        printf("\n");
    }
    printf("\n");
}
