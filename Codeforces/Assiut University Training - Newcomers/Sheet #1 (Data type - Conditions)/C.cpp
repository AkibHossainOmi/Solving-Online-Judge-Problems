#include<stdio.h>
int main()
{
    long long int X,Y,s,m,a;
    scanf("%lld %lld",&X,&Y);
    s = X + Y;
    m = X * Y;
    a = X - Y;
    printf("%lld + %lld = %lld\n", X,Y,s);
    printf("%lld * %lld = %lld\n", X,Y,m);
    printf("%lld - %lld = %lld\n", X,Y,a);
    return 0;

}
