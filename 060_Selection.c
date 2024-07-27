// Program to check whether input is a digit or not

# include <stdio.h>
main()
{
    char a=0;

    printf("\n Enter a character : ");
    scanf("%c",&a);

    (a>=48 && a<=57) ? printf(" %c is a number",a) : printf(" %c is not a number",a);

    printf("\n");
    getch();
}
