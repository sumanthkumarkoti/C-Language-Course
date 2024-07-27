// Program to store even numbers in odd index and odd numbers in even index
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int arr[10]={0};
    int i,j,r,a,b;
    char found='n';

    i=r=0;

    srand(time(0));
    while (i<10)
    {
        r=rand()%10;

        if (r!=0)
        {
            if (r%2==0)
            {
                if(i%2==0)
                {
                    arr[i]=r;
                    i++;
                }
            }
            else
                if (i%2!=0)
                {
                    arr[i]=r;
                    i++;
                }
        }
    }

    for (i=0;i<10;i++)
        printf("\t%d",arr[i]);


    printf("\n");
    getch();
}
