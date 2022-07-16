#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, b[200]= {}, x=0;
        scanf("%d",&n);
        char s[n+2];
        scanf("%s",&s);
        for(int i=0; i<n; i++)
        {
            b[s[i]]++;
            if(b[s[i]]==1) x+=2;
            else x+=1;
        }
        printf("%d\n",x);
    }
    return 0;
}
