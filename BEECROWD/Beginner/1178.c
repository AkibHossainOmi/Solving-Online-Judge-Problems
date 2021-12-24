#include <stdio.h>

int main()
{
    int i,j,a[100];
    double n;
    scanf("%lf",&n);
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,n);
        n=n/2;
    }
    return 0;
}
