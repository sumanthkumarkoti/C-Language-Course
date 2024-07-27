// Program to read the grade of student and display corresponding message

# include <stdio.h>
main ()
{
    char ch;

    printf("\n Enter your grade : ");
    scanf("%c",&ch);

    ch = toupper(ch);

    switch (ch)
    {
        case 'S': printf("\n SUPER"); break;
        case 'A': printf("\n VERY GOOD"); break;
        case 'B': printf("\n FAIR"); break;
        case 'Y': printf("\n ABSENT"); break;
        case 'F': printf("\n FAIL"); break;
        default : printf("\n \"INVALID INPUT\" ");
    }

    printf("\n");
    getch();
}
