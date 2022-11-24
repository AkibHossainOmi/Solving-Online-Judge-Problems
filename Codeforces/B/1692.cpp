#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    int t, f;

    scanf("%d",&t);
    while(t--)
    {
        int n, l, x=0;

        scanf("%d",&n);
        l=n;
        int a[n], c[10010]={0}, m;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            c[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(c[a[i]]>1) 
            {
                x+=c[a[i]]-1;
                c[a[i]]=1;
            }
        }
        if(x%2!=0) x++;
        printf("%d\n",l-x);
    }
}