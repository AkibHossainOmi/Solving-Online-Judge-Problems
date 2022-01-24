#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m,i,j,r;
    scanf("%d %d",&n,&m);
    char t[n+1][20], s[m+1][20];
    for(i=0;i<n;i++)
        scanf("%s",&t[i]);
    for(i=0;i<m;i++)
        scanf("%s",&s[i]);
    printf("Yes\n");
    j=1;
    for(i=1;i<n-1;i++)
    {
        if(strcmp(t[i],s[j])==0)
        {
            j++;
            printf("Yes\n");
        }
        else printf("No\n");
    }
    printf("Yes\n");
    return 0;
}
