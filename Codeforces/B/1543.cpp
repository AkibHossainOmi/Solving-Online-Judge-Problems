#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int i,j,n;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n],s=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            s=s+a[j];
        }
        printf("%lld\n",(s%n)*(n-(s%n)));
    }
}
