#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t;
     scanf("%lld",&t);
     long long int a,b,n,i,x,d;
     while(t--)
     {
         scanf("%lld",&n);
         long long int c[n+1];
         for(i=0;i<n;i++)
         {
             scanf("%lld",&c[i]);
         }
         if(n==1&&c[0]>1)
         {
             printf("NO\n");
             continue;
         }
         else if(n==1)
         {
             printf("YES\n");
             continue;
         }
         sort(c,c+n);
         d=c[n-1]-c[n-2];
         if(d>1) printf("NO\n");
         else printf("YES\n");
     }
}
