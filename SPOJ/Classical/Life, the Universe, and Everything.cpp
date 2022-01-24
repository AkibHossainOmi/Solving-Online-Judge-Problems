#include<stdio.h>

int main()
{
    long long int a,r=0;
    for(long long int i=0; i>=0; i++)
    {
        scanf("%lld",&a);
        if(r==1) break;
        if(a==42)
        {
            r++;
            continue ;
        }
        printf("%lld\n",a);
    }
    return 0;
}
