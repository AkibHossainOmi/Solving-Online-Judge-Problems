#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r,b,p,q=0;
        scanf("%d %d %d",&n,&r,&b);
        p=r/(b+1);
        if(r%(b+1)!=0) q=r-p*(b+1);
        int y=0;
        char s[n+2];
        for(int i=0;i<b+p*(b+1);i++)
        {
            if(y==p)
            {
                s[i]='B';
                y=0;
            }
            else
            {
                s[i]='R';
                y++;
            }
        }
        y=0;
        for(int i=0;i<b+p*(b+1);i++)
        {
            if(s[i]=='B'&&y<q)
            {
                printf("RB");
                y++;
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
