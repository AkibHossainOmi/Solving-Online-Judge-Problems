#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k, r=0;
    scanf("%d %d %d",&a,&b,&k);
    int x=__gcd(a,b);
    for(int i=x;i<=x;i--)
    {
        if(x%i==0)
        {
            r++;
        }
        if(r==k)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
