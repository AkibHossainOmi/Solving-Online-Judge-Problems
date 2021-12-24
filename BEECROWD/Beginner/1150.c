#include <stdio.h>

int main()
{
    int i,j,a,n,s=0,c=0;
    scanf("%d",&a);
    for(j=0; j>=0; j++)
    {
        scanf("%d",&n);
        if(n<=a) continue;
        else
        {
            for(i=a; i>=a; i++)
            {
                s=s+i;
                c++;
                if(s>n) break;
            }
        }
        if(s>n) break;
    }
    printf("%d\n",c);
    return 0;
}
