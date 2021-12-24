#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,s,m,l,r;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n<6)
        {
            printf("15\n");
            continue;
        }
        s=n/6;
        m=(n%6)/8;
        l=((n%6)%8)/10;
        r=((n%6)%8)%10;
        if(r==1||r==2) printf("%lld\n",(s*15)+(m*20)+(l*25)-15+20);
        else if(r==3||r==4) printf("%lld\n",(s*15)+(m*20)+(l*25)-15+25);
        else if(r==5) printf("%lld\n",(s*15)+(m*20)+(l*25)+15);
        else printf("%lld\n",(s*15)+(m*20)+(l*25));
    }
    return 0;
}
