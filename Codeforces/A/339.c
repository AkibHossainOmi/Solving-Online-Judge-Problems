#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,v,x,y;
    scanf("%s",&a);
    for(v=0;v<strlen(a);v+=2)
    {
        for(j=v+2;j<strlen(a);j+=2)
        {
            if(a[j]<a[v])
            {
                x=a[j];
                y=j;
                a[y]=a[v];
                a[v]=x;
            }
        }
    }

    for(v=0;v<strlen(a);v++)
    {
        printf("%c",a[v]);
    }
}
