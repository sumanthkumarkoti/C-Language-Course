// Functions Declaration
float mean3(float,float,float);
char checkno(float);
int wcount(char []);
char propercase(char []);

// Function Definiton
//Mean Function
float mean3(float x,float y,float z)
{
    float mean3,sum=0;
    sum=x+y+z;
    mean3=sum/3.0;
    return mean3;
}

//Check number function
char checkno(float x)
{
    if (x>0)
        return 'p';
    else if (x<0)
        return 'n';
    else if (x==0)
        return 'z';
}

//Word count
int wcount(char str[])
{
    int i,w=1;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==' ')
          w++;
    }
    return w;
}

// Proper case
char propercase(char str[])
{
    int i;
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]>=65 && str[i]<=97)
            str[i]=tolower(str[i]);
        else
        if (str[i]==' ')
        {
            i++;
            if (str[i]>=97 && str[i]<=122)
                str[i]=toupper(str[i]);
        }
    }

    str[0]=toupper(str[0]);
}
