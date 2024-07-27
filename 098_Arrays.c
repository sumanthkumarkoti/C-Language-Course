// Program to find frequency of each element from array of n elements
# include <stdio.h>
main()
{
    int i,j,c,n,a[100],f[100];

    printf("\n Enter number of elements of the array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\n Enter Element %d : ",i+1);
        scanf("%d",&a[i]);
        f[i]=-1;
    }

    for (i=0;i<n;i++)
    {
        c=1;
        if (f[i]!=0)
        {
            for (j=i+1;j<n;j++)
            {
                if ( a[i]==a[j] )
                {
                    c++;
                    f[j]=0;
                }
            }
            f[i]=c;
        }
    }

    printf("\n Frequency of each element is \n");
    for (i=0;i<n;i++)
    {
        if (f[i]!=0)
            printf("\n %d repeated %d times",a[i],f[i]);
    }

    printf("\n");
}
