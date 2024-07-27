// Program to perform matrix multiplication
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main ()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    srand(time(0));
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            a[i][j]=rand()%10;
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            b[i][j]=rand()%10;
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            c[i][j]=( a[i][0]*b[0][j] ) + ( a[i][1]*b[1][j] ) + ( a[i][2]*b[2][j] );
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }

    printf("\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("\t%d",b[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("\t%d",c[i][j]);
        printf("\n");
    }
    printf("\n");
}
