#include<stdio.h>
#include<string.h>
int main()
{
    char m[101], n[101];
    scanf("%s %s",&m,&n);
    int i,x=strlen(n),r=0;
    for(i=0;i<strlen(n);i++)
    {
        x--;
        if(m[i]!=n[x])
        {
            r++;
            break;
        }
    }
    if(r==0) printf("YES\n");
    else printf("NO\n");
}
