// Program to print upper and lower triangle 5*5 array
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main ()
{
    int i,j,a[5][5];

    srand(time(0));
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i>j)
                a[i][j]=0;
            else
                if(i<j)
                a[i][j]=0;
            else
                a[i][j]=rand()%50;
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
            printf("\t%d",a[i][j]);
        printf("\n\n");
    }
    printf("\n");
}
