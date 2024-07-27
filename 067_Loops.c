// Program to read a name and display it the no. of letters times along with serial no.
# include <stdio.h>
main()
{
    int a=0,c=1;
    char name[100];

    printf("\n Enter Name : ");
    scanf("%s",&name);

    a=strlen(name);

    do
    {
        printf(" %d.%s\n",c,name);
        c++;
    }while(c<=a);


    printf("\n");
    getch();
}
