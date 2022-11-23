#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s=0,x=0;
        scanf("%d",&n);
        int a[n],b[200]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0) s++;
            b[a[i]]++;
            if(b[a[i]]==2) x=2;
        }
        if(s>0)
        {
            printf("%d\n",n-s);
        }
        else if(x==2)
        {
            printf("%d\n",n);
        }
        else printf("%d\n",n+1);
    }
    return 0;
}
