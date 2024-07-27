// Program to recreate ren command
// Question 134
#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[])
{
    char ch;
    char new_name[100];

    if (argc!=3)
    {
        printf("\n Usage : %s <old_filename> <new_filename>\n\n", argv[0]);
        exit(0);
    }

    FILE *fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        printf("\a\nFile '%s' does not exist.\n\n", argv[1]);
        exit(0);
    }
    fclose(fp);

    printf(" Do you want to rename '%s' to '%s'? (Y/N) : ",argv[1],argv[2]);
    fflush(stdin);
    scanf("%c",&ch);
    ch=tolower(ch);

    if (ch=='n')
    {
        printf("\n File renaming cancelled.\n\n");
        exit(0);
    }
    else if (ch=='y')
    {
        if (rename(argv[1],argv[2])==0)
            printf("\nFile renamed successfully.\n\n");
        else
            perror("Error renaming file");
    }
    else
        printf("\nInvalid input. File renaming cancelled.\n\n");

}
