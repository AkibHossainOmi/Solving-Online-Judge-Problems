#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,n,k,r,x;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d %d",&n,&k);
        char s[n+2];
        scanf("%s",&s);
        r=0,x=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) r++;
            else x++;
        }
        if(k<r) printf("NO\n");
        else
        {
            if(r==k) printf("YES\n");
            else if(n%2!=0) printf("YES\n");
            else if(n%2==0&&(k-r)%2==0) printf("YES\n");
            else printf("NO\n");
        }
        t--;
    }
}
