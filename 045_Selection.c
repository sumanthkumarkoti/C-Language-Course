// Program to read marks and display grades

# include <stdio.h>

main()

{
    float sales,dis,amt;

    sales=dis=amt=0;

    printf("\n Enter Sales Amount : ");
    scanf("%f",&sales);

    if (sales>=25000)
        dis = sales * 0.25;
    else if (sales>20000 && sales<25000)
        dis = sales * 0.20;
    else if (sales>10000 && sales<20000)
        dis = sales * 0.10;
    else if (sales>5000 && sales<10000)
        dis = sales * 0.5;
    else if (sales<5000)
        dis = 0;

    amt = sales + dis;

    printf("\n Discount : %.2f",dis);
    printf("\n Actual Amount : %.2f",amt);

    printf("\n");
    getch();
}
