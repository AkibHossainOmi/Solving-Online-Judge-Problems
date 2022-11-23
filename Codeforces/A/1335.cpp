#include<stdio.h>
int main()
{
    long long int a,b,n,t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0) printf("%lld\n",(n/2)-1);
        else printf("%lld\n",n/2);
    }
}
