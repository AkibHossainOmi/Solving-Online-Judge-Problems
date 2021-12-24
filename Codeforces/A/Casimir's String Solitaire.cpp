#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,a,b,c;
    scanf("%d",&t);
    char s[100];
    for(i=0;i<t;i++)
    {
        scanf("%s",&s);
        a=0;
        b=0;
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='A') a++;
            if(s[j]=='B') b++;
            if(s[j]=='C') c++;
        }
        if(a>b)
        {
            printf("NO\n");
            continue;
        }
        if(a==b)
        {
            if(c==0) printf("YES\n");
            else printf("NO\n");
            continue;
        }
        if(a<b)
        {
            if(b-a==c) printf("YES\n");
            else printf("NO\n");
            continue;
        }
    }
}
