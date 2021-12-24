#include <stdio.h>

int main()
{
    int n,i,j,m,p;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        m=a[i];
        p=i;
        for(j=0; j<n; j++)
        {
            if(m>a[j])
            {
                m=a[j];
                p=j;
            }
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",m,p);
    return 0;
}
