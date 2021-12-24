#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,c,i,j,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        a=0;
        scanf("%d %d",&n,&k);
        int p[k];
        for(j=0;j<k;j++)
        {
            scanf("%d",&p[j]);
        }
        sort(p,p+k);
        for(j=k-1;j>=0;j--)
        {
            if(p[j]>c)
            {
                c+=n-p[j];
                a++;
            }
            else break;
        }
        printf("%d\n",a);
    }
}
