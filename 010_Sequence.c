// Program to read full name,gender,native place of a person and display

# include <stdio.h>

main()

{
    char a[100],b,c[100];


    printf("\n");
    printf(" Enter your name: ");
    scanf("%[^\n]",&a);
    fflush(stdin);
    printf("\n");
    printf(" Enter your Gender(M/F) : ");
    scanf("%c",&b);
    fflush(stdin);
    printf("\n");
    printf(" Enter your Native Place : ");
    scanf("%[^\n]",&c);


    printf("\n");
    printf(" %s - ",a);
    printf("%c - ",b);
    printf("%s",c);
    printf("\n");

    getch();
}
