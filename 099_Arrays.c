// Program to fill an array of 10 elements with random numbers and print no of digits
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int i,len,arr[10],no;

    srand(time(0));
    for (i=0;i<10;i++)
    {
        arr[i]=rand();
    }
    for (i=0;i<10;i++)
    {
        no=arr[i];
        len=0;
        while (no!=0)
        {
            no=no/10;
            len++;
        }
        printf("\n %d. %d - %d",i+1,arr[i],len);
    }
    printf("\n");
}
