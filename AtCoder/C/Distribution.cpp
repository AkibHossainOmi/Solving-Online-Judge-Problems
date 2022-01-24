#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k=0,s,p;
    scanf("%d",&n);
    int t[n+1],j[n+1], m[n+10];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&j[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
        if(i==0)
        {
            p=i;
            s=t[i];
        }
        if(t[i]<s)
        {
            p=i;
            s=t[i];
        }
    }
    m[p]=s;
    int l=p;
    k=p+1;
    if(p+1==n) k=0;
    for(int i=0; i>=0; i++)
    {
        m[k]=min(s+j[l],t[k]);
        s=m[k];
        if(k==p-1&&p!=0) break;
        else if(k==n-1&&p==0) break;
        if(p!=0&&k==n-1)
        {
            l=k;
            k=0;
            continue;
        }
        l=k;
        k++;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",m[i]);
    }

}
