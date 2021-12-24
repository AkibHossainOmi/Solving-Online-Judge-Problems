#include <stdio.h>

int main()
{
    int i,j,a[15],b[5],n,s=0,t=0,u=0,z=0,x=0;
    for(i=0; i<15; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1; j<=15; j++)
    {
        for(i=x; i<15; i++)
        {
            if(a[i]%2!=0)
            {
                if(t==5)
                {
                    t=0;
                    break;
                }
                u++;
                printf("impar[%d] = %d\n",t,a[i]);
                t++;
            }
            x++;
        }
        for(i=z; i<15; i++)
        {
            z++;
            if(a[i]%2==0)
            {
                u++;
                printf("par[%d] = %d\n",s,a[i]);
                s++;
                if(s==5)
                {
                    s=0;
                    break;
                }
            }
        }
        if(u==15) break;
    }
    return 0;
}
