#include <stdio.h>
int main()
{
    int i,a,b,p,m,t,j,u=0,v=0,n;
    double r,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%lf%lf",&a,&b,&r,&s);
        p=a;
        m=b;
        for(j=1; j>0; j++)
        {
            if(j>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
            u=p*r/100;
            p=p+u;
            v=m*s/100;
            m=m+v;
            if(p>m)
            {
                printf("%d anos.\n",j);
                break;
            }
        }
    }
    return 0;
}
