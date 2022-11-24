#include<stdio.h>
#include<string.h>
int main()
{
    int t,nm,nb;
    scanf("%d",&t);
    int i,j,k;
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&nm,&nb);
        int hm[nm];
        for(j=0;j<nm;j++)
        {
            scanf("%d",&hm[j]);
        }
        for(j=1;j<=nb;j++)
        {
            for(k=0;k<nm;k++)
            {
                if(hm[k]<hm[k+1]&&k!=nm-1)
                {
                    hm[k]=hm[k]+1;
                    break;
                }
                if(k==nm-1) break;
            }
            if(k==nm-1) break;
        }
        if(k+1==nm) printf("%d\n",-1);
        else printf("%d\n",k+1);
    }
}
