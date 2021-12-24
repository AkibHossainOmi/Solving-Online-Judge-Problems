#include<stdio.h>
#include<string.h>
int main()
{
    char n[20];
    scanf("%s",&n);
    int i,x=0;
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='7'||n[i]=='4')
        {
            x++;
        }
    }
    if(x==4||x==7) printf("YES\n");
    else printf("NO\n");
}
