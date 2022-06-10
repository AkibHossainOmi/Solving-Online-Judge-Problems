#include<stdio.h>
int main()
{
    int t;
    long long int n, min, max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        min=2*(n/12);
        max=3*(n/12);
        if(n<4||(n%12)%2==1) 
        {
            printf("-1\n");
            continue;
        }
        else if(n%12==2)
        {
            min=1+2*(n/12);
            max=3*(n/12);
        }
        else if(n%12==4||n%12==6)
        {
            min=1+2*(n/12);
            max=1+3*(n/12);
        }
        else if(n%12==8||n%12==10)
        {
            min=2+2*(n/12);
            max=2+3*(n/12);
        }
        printf("%lld %lld\n",min,max);
    }
    return 0;
}