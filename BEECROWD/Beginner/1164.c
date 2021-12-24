#include <stdio.h>

int main()
{
    int a,b,s=0,n,t,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        for(t=1; t<a; t++)
        {
            if(a%t==0)
            {
                s=t+s;
            }
        }
        if(s==a) printf("%d eh perfeito\n",a);
        else printf("%d nao eh perfeito\n",a);
        s=0;
    }
    return 0;
}
