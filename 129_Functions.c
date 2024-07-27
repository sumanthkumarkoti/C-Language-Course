// Program to display number of visitors of a website
#include <stdio.h>
main()
{
    int i;
    for (i=0;i<10;i++)
        countVisitors();

    printf("\n");
}
void countVisitors()
{
    static int visitorCount=0;
    visitorCount++;
    printf("\n Visitor count : %d",visitorCount);
}

