// Program to insert an element in an array of n elements
# include <stdio.h>
main()
{
    int n,i,pos,element,arr[n+1];

    printf("\n Enter the number of elements in the array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\n Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n Array Before Insertion : \n");
    for (i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }

    printf("\n Enter the position to insert the element (1 to %d) : ",n+1);
    scanf("%d",&pos);

    if (pos<1 || pos>n+1)
    {
        printf("\a\n\t\t\t\t\t\tInvalid position!\n");
        return;
    }

    printf("\n Enter the element to be inserted : ");
    scanf("%d",&element);

    for (i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos-1]=element;

    printf("\n Array After Insertion :\n");
    for (i=0;i<=n;i++)
    {
        printf("\t%d",arr[i]);
    }

    printf("\n");
}
