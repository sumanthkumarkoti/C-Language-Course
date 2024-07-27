// Program to read capital letters and display them in lower letters

# include <stdio.h>

main()

{
    char a;

    printf("\n");
    printf(" Enter any Upper-case Alphabet (A - Z) : ");
    scanf("%c",&a);

    printf("\n");
    printf(" Lower-case Letter is '%c'", a + 32);

    printf("\n");
    getch();
}
