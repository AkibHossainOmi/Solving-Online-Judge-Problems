#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int x,y;
        scanf("%lld %lld",&x,&y);
        if(y%x!=0) printf("0 0\n");
        else printf("1 %d\n",y/x);
    }
    return 0;
}