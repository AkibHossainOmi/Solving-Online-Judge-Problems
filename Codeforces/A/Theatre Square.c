#include<stdio.h>
#include<math.h>
int main()
{
    long long int m,n,a,b,c;
    scanf("%lld%lld%lld",&m,&n,&a);
    if(m%a==0&&n%a==0)
    {
        b=m/a;
        c=n/a;
    }
    else if(m%a!=0&&n%a==0)
    {
        b= m/a+1;
        c= n/a;
    }
    else if(m%a==0&&n%a!=0)
    {
        b=m/a;
        c=n/a+1;
    }
    else if(m%a!=0&&n%a!=0)
    {
        b=m/a+1;
        c=n/a+1;
    }
    printf("%lld",b*c);
}
