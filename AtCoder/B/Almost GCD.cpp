#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0) m=a[i];
        m=max(m,a[i]);
    }
    int b[m+10]={0}, x,p;
    for(int i=2;i<=m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                b[i]++;
            }
        }
        if(i==2)
        {
            x=b[i];
            p=i;
        }
        x=max(x,b[i]);
        if(x==b[i]) p=i;
    }
    printf("%d\n",p);
    return 0;
}
