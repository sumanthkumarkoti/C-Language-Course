// Program to read an array of 'N' elements and print average and total
# include <stdio.h>
main()
{
    int i,n,a[1000]={0};
    float total,avg;

    total=avg=0;

    printf("\n Enter Value of 'N' : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\n Enter Number %d : ",i+1);
        scanf("%d",&a[i]);
        if(a[i]=='=')
           {
               break;
           }
    }

    for (i=0;i<n;i++)
    {
        total+=a[i];
    }

    avg=total/n;

    printf("\n Total : %.2f",total);
    printf("\n Average : %.2f",avg);

    printf("\n");
    getch();
}
