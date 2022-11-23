#include<stdio.h>
#include<string.h>
int main()
{
    int v,i,r;
    char a[100];
    scanf("%s",&a);
    r=strlen(a);
    for(v=0;v<strlen(a);v++)
    {
        if(a[v]=='1') continue;
        for(i=v+1;i<strlen(a);i++)
        {
            if(a[v]==a[i])
            {
                a[i]='1';
                r--;
            }
        }
    }
    if(r%2==0)
    printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}
