#include <stdio.h>

int main()
{
    int a,b,s=0,n,t,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        for(t=2; t<a; t++)
        {
            if(a%t==0)
                s++;
        }
        if(s==0) printf("%d eh primo\n",a);
        else printf("%d nao eh primo\n",a);
        s=0;
    }
    return 0;
}
