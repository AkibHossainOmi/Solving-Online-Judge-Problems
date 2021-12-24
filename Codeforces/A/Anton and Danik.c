#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char g[n+1];
    int a=0, d=0;
    scanf("%s",&g);
    for(int i=0; i<n; i++)
    {
        if(g[i]=='A') a++;
        else d++;

    }
    if(a>d) printf("Anton\n");
    else if(d>a) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}
