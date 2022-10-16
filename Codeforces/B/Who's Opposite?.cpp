#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,t,i,s;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        s=abs(a-b)*2;
        //printf("%d...\n",s);
        if(s>=a&&s>=b&&s>=c)
        {
            if(c+s/2<=s) printf("%lld\n",c+s/2);
            else printf("%lld\n",c-s/2);
        }
        else printf("-1\n");
    }
}
