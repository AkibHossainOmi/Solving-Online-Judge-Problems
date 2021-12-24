#include <stdio.h>

int main()
{
    int i,j,a,n,s=0;
    scanf("%d",&a);
    for(j=0; j>=0; j++)
    {
        scanf("%d",&n);
        if(n<=0) continue;
        else
        {
            for(i=a; i<a+n; i++)
            {
                s=s+i;
            }
            printf("%d\n",s);
            break;
        }
    }
    return 0;
}
