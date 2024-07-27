// Program to fill an array of n elements with multiples of 5 and copy them to another array and print it
# include <stdio.h>
main()
{
    int i,n,arr1[1000]={0},arr2[1000]={0};

    printf("\n Enter value of 'N' : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        arr1[i]=arr1[i-1]+5;
    }
    for (i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    for (i=0;i<n;i++)
    {
        printf("\t%d",arr2[i]);
    }

    printf("\n");
}
