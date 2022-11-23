#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, n, x, r, i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        x=0;
        r=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) r++;
            else x++;
        }
        (r>x)? printf("%d\n",x):printf("%d\n",r);
    }
    return 0;
}
