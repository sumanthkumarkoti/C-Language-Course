// Program to name and display success message
# include <stdio.h>
# include <string.h>
main()
{
    int i,len;
    char name[100];

    printf("\n Enter Name : ");
    scanf("%s",&name);

    len=strlen(name);

    if (len<5)
        printf("\n Name must contain more than 5 characters.");
    else
        printf("\n Name has been stored successfully.");


    printf("\n");
}
