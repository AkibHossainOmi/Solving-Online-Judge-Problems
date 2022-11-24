#include<stdio.h>
#include<string.h>
int main()
{
    char w[101];
    scanf("%s",&w);
    int i,x=0,y=0;
    for(i=0;i<strlen(w);i++)
    {
        if(w[i]>='A'&&w[i]<='Z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(x>y)
    {
        for(i=0;i<strlen(w);i++)
        {
            if(w[i]>'Z')
            {
                w[i]=w[i]-('a'-'A');
            }
        }
    }
    else
    {
        for(i=0;i<strlen(w);i++)
        {
            if(w[i]<'a')
            {
                w[i]=w[i]+('a'-'A');
            }
        }
    }
    printf("%s\n",w);

}
