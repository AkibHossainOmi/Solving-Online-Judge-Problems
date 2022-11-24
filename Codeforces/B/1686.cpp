#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, x=0, e=0, i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(e==0) e=a[i];
            if(i>0)
            {
                if(e>a[i])
                {
                    x++;
                    e=0;
                }
                else e=a[i];
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
