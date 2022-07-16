#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[4];
        scanf("%s",&s);
        strupr(s);
        if(strcmp(s,"YES")==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
