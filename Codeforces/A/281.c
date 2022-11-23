#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int v,x,y;
    scanf("%s",&a);
    for(v=0;v<strlen(a);v++)
    {
        if(a[0]>=97) a[0]=a[0]-32;
        printf("%c",a[v]);
    }
    return 0;
}
