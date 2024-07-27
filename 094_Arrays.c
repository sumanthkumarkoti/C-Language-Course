// Program to fill an array of 10 elements with random numbers and print in ascending and descending orders
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define SIZE 10
main()
{
    int i=1,j,r,temp=0;
    int arr[SIZE]={0},a[SIZE]={0},d[SIZE]={0};
    char found='n';

    srand(time(0));
    while (i<=SIZE)
    {
        r=rand()%1000;
        for (j=0;j<SIZE;j++)
        {
            if (arr[j]==r)
            {
                found='y';
                break;
            }
        }
        if (found=='n')
        {
            arr[i]=r;
            printf("\t%d",arr[i]);
            i++;

        }
    }
    // For Ascending Order
    for (i=0;i<SIZE;i++)
    {
        a[i]=arr[i+1];
    }
    // Logic
    for (i=0;i<SIZE;i++)
    {
        for (j=0;j<SIZE;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n Ascending Order :\n");
    for (i=9;i>=0;i--)
            printf("\t%d",a[i]);

    // For Descending Order
    for (i=0;i<SIZE;i++)
    {
        d[i]=arr[i+1];
    }
    // Logic
    for (i=0;i<SIZE;i++)
    {
        for (j=0;j<SIZE;j++)
        {
            if(d[i]>d[j])
            {
                temp=d[j];
                d[j]=d[i];
                d[i]=temp;
            }
        }
    }
    printf("\n Descending Order :\n");
    for (i=0;i<SIZE;i++)
            printf("\t%d",d[i]);

    printf("\n");
}
