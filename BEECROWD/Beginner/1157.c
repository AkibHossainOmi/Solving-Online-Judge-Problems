#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i>=1; i++)
    {
        if(n%i==0) printf("%d\n",i);
        if(n<i) break;
    }
    return 0;
}
