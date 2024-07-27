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
        case 'E': printf("\n Excellent"); break;
        case 'V': printf("\n Very Good"); break;
        case 'G': printf("\n Good"); break;
        case 'A': printf("\n Average"); break;
        case 'F': printf("\n Fail"); break;
        default : printf("\n \"INVALID INPUT\" ");
    }

    printf("\n");
    getch();
}
