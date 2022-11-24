#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n], c;
        x=0,y=0;
        int e;
        if(n%2==0) e=n/2;
        else e=1+n/2;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i%2==0&&a[i]%2==0) x++;
            if(i%2!=0&&a[i]%2==0) y++;
        }
        if((x==0||x==e)&&(y==0||y==n-e)) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
