// Program to fill an array of 10 elements with random numbers
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int i,arr[10];

    srand(time(0));
    for (i=0;i<10;i++)
    {
        arr[i]=rand()%1000;
        printf("\t%d",arr[i]);
    }

    printf("\n");
}
