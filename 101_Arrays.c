// Program to delete an element from an array of n elements
#include <stdio.h>
main()
{
    int i,n,pos,arr[n+1];

    printf("\n Enter the number of elements in the array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\n Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n Array Before Deletion : \n");
    for (i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }


    printf("\n Enter the position of the element to be deleted (1 to %d) : ", n);
    scanf("%d",&pos);

    if (pos<1 || pos>n)
    {
        printf("\a\n\t\t\t\t\t\tInvalid position!\n");
    }
    else
    {
        for (int i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;

        printf("\n Array after deletion :\n");
        for (int i=0;i<n;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
    printf("\n");
}
