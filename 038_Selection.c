// Program to read the temperature and display suitable message

# include <stdio.h>

main()
{
    float temp;

    printf("\n");
    printf(" Enter Temperature in Centigrade : ");
    scanf("%f",&temp);
    printf("\n Temperture is %.2f \n",temp);

    if (temp<0)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" Ohhh! It's Freezing.");
    }

    else if (0<=temp && temp<=10)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" It's a too Cold out here!");
    }

    else if (10<temp && temp<=20)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" It's a little Cold out here!");
    }

    else if (20<temp && temp<=30)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" Hmmm! Looks like a good weather.");
    }
    else if (30<temp && temp<=40)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" It's getting a little hot out here.");
    }

    else  if (temp>=40)
    {
        printf("\n\t\t\t\t\t\t");
        printf(" Ohhh! It's freaking hot.");
    }

    printf("\n");
    getch();
}
