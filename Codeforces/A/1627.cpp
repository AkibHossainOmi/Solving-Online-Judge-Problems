#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,n,m,r,c,i,j,k,x=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        x=0;
        scanf("%d %d %d %d",&n,&m,&r,&c);
        char s[n][m];
        for(j=0;j<n;j++)
        {
            scanf("%s",&s[j]);
        }
        if(s[r-1][c-1]=='B')
        {
            printf("0\n");
            continue;
        }
        for(j=0;j<m;j++)
        {
            if(s[r-1][j]=='B')
            {
                x=-1;
                printf("1\n");
                break;
            }
        }
        if(x==-1) continue;
        for(j=0;j<n;j++)
        {
            if(s[j][c-1]=='B')
            {
                x=-1;
                printf("1\n");
                break;
            }
        }
        if(x==-1) continue;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(s[j][k]=='B')
                {
                    x=1;
                    break;
                }
            }
            if(x==1)
            {
                printf("2\n");
                break;
            }
        }
        if(x==1) continue;
        printf("-1\n");
    }

}
