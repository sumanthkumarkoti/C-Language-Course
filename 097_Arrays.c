// Program to read and print max and min numbers
# include <stdio.h>
main()
{
    int no[10],max,min,i;

    for (i=0;i<10;i++)
    {
        printf("\n Enter %d Number : ",i+1);
        scanf("%d",&no[i]);
    }

    max=min=no[0];

    for (i=0;i<10;i++)
    {
        if (no[i]>max)
            max=no[i];
        else
            if (no[i]<min)
            {
                min=no[i];
            }
    }



    printf("\n Maximum Number is %d.",max);
    printf("\n Minimum Number is %d.",min);
    printf("\n");
}
