#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y;
    scanf("%lld",&t);
    long long int i;
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&x,&y);
        printf("%lld ",abs(x-y));
        if(x==y)
        {
            printf("0\n");
            continue;//min(abs((abs(x-y)*((y/abs(x-y))+1))-y),abs((abs(x-y)*((y/abs(x-y))-1))-y))
            //min(abs((abs(x-y)*((x/abs(x-y))+1))-x),abs((abs(x-y)*((x/abs(x-y))-1))-x))
        }
        if(x==0||y==0)
        {
            printf("%lld\n",min(x,y));
            continue;
        }
        if(x%abs(x-y)!=0&&x>abs(x-y)) printf("%lld\n",min(abs((abs(x-y)*((y/abs(x-y))+1))-y),abs((abs(x-y)*((y/abs(x-y))))-y)));
        else if(x%abs(x-y)==0&&x>abs(x-y)) printf("%lld\n",x%abs(x-y));
        else if(y%abs(x-y)!=0&&y>abs(x-y)) printf("%lld\n",min(abs((abs(x-y)*((x/abs(x-y))+1))-x),abs((abs(x-y)*((x/abs(x-y))))-x)));
        else if(y%abs(x-y)==0&&y>abs(x-y)) printf("%lld\n",y%abs(x-y));
        printf("\n");
    }
}
