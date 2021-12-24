#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int t, n, i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
    scanf("%lld",&n);
    if(n!=1) printf("-%lld %lld\n",n-1,n);
    else printf("0 1\n");
    }
    return 0;
}
