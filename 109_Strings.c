// Program to read username and password(password input is displayed in stars *)
# include <stdio.h>
# define max 100
main()
{
    char username[max];
    char password[max];

    void read_password(char *password);

    printf("\n Enter username : ");
    scanf("%s",&username);

    printf("\n Enter password : ");
    read_password(password);

    printf("\n");
}
void read_password(char *password)
{
    int i=0;
    char ch;

    while (1)
    {
        ch=getch();
        if (ch==13)
        {
            password[i] = '\0';
            break;
        }
        else if (ch==8)
        {
            if (i>0)
            {
                i--;
                printf("\b \b");
            }
        } else if (i<max-1)
        {
            password[i]=ch;
            i++;
            printf("*");
        }
    }
    return ;
}
