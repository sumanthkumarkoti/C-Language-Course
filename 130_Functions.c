// Program to read a string and display character along with address
# include <stdio.h>
main ()
{
    int i,*p;
    char str[100];

    printf("\n Enter String : ");
    scanf("%[^\n]",&str);

    p=&str;

    for (i=0;str[i]!='\0';i++)
    {
        printf("\n %u - %c",p,str[i]);
        p++;
    }
    printf("\n");
}
