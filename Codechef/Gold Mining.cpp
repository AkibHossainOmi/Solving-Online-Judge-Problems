#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&x,&y);
        if((n+1)*y<x) printf("NO\n");
        else printf("YES\n");
    }
}
