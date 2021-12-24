#include <stdio.h>

int main()
{
    unsigned long long int i,f=0,s=1,t,n,m;
    scanf("%llu",&n);
    unsigned long long int a[100];
    for(i=0; i<=100; i++)
    {
        a[i]=f;
        t=f+s;
        f=s;
        s=t;
    }
    for(i=0; i<n; i++)
    {
        scanf("%llu",&m);
        printf("Fib(%llu) = %llu\n",m,a[m]);
    }
    return 0;
}
