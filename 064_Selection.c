// Program to read the grade of student and display corresponding message

# include <stdio.h>
main ()
{
    char ch;

    printf("\n Enter colour of traffic signal : ");
    scanf("%c",&ch);

    ch = toupper(ch);

    switch (ch)
    {
        case 'R': printf("\n \"RED Light Please STOP\" "); break;
        case 'Y': printf("\n \"YELLOW Light Please Check and Go\" "); break;
        case 'G': printf("\n \"GREEN Light Please GO\" "); break;
        default : printf("\n \"THERE IS NO SIGNAL POINT\" ");
    }

    printf("\n");
    getch();
}
