// Program to build a housie app
# include <stdio.h>
# include <string.h>
# include <time.h>
main()
{
   int i,j,r,arr[9][10];
   char found='n';

   srand(time(0));
   for(i=0;i<9;i++)
   {
       for(j=0;j<10;j++)
        arr[i][j]=rand()%90;
   }
   for(i=0;i<9;i++)
   {
       for(j=0;j<10;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
   }

   printf("\n") ;
}
