// Program to search an element in 5*5 matrix
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main ()
{
    int a[5][5],no,i,j;
    char found='n';

    srand(time(0));
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
            a[i][j]=rand()%1000;
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n Enter a Number to search : ");
    scanf("%d",&no);

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (no==a[i][j])
              {
                  found='y';
                  break;
              }
        }
        if (found=='y')
            break;
    }

    if (found=='y')
        printf("\n %d is found at %d,%d.",no,i+1,j+1);
    else
        printf("\n %d is not found.",no);


    printf("\n");
}
