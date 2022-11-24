#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        int c, r;
        c = sqrt(k)+1;
        if(sqrt(k)==c-1) c=sqrt(k);
        r = k - (c-1)*(c-1);
        if(r>c) printf("%d %d\n",c,c-(r-c));
        else printf("%d %d\n",r,c);
    }
    return 0;
}
