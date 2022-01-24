#include<stdio.h>
int main()
{
    long long int n,x;
    scanf("%lld%lld",&n,&x);
    long long int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=x) printf("%lld ",a[i]);
    }
    return 0;
}
