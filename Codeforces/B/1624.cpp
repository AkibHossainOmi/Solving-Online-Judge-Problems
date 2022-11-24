#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,a,b,c,x,y;
    scanf("%lld",&t);
    for(ll i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a==0||b==0||c==0)
        {
            printf("NO\n");
            continue;
        }
        if(a-b==b-c)
        {
            printf("YES\n");
            continue;
        }
        else if((a+c)%2==0&&((a+c)/2)%b==0) printf("YES\n");
        else if((a==b&&b>c&&b%c==0)||(b==c&&c>a&&c%a==0)||(a==c&&a>b&&a%b==0)) printf("YES\n");
        else
        {
            if(a>b)
            {
                x=b-(a-b);
                if(x%c==0&&x>0)
                {
                    printf("YES\n");
                    continue;
                }
            }
            if(b>a)
            {
                x=b+b-a;
                if(x%c==0&&x>0)
                {
                    printf("YES\n");
                    continue;
                }
            }
            if(b>c)
            {
                x=b+b-c;
                if(x%a==0&&x>0)
                {
                    printf("YES\n");
                    continue;
                }
            }
            if(c>b)
            {
                x=b-(c-b);
                if(x%a==0&&x>0)
                {
                    printf("YES\n");
                    continue;
                }
            }
            printf("NO\n");
        }
    }
}
