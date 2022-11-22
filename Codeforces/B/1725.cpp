#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ll n, d;
     cin>>n>>d;
     ll a[n], s=0;
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a, a+n, greater<int>());
     ll i=0, j=n-1, t=0;
     while(i<j)
     {
         if(s==0) s+=a[i];
         if(s>d)
         {
             i++, t++, s=0;
         }
         else
         {
             s+=a[i];
             if(s>d) i++, t++, s=0;
             j--;
         }
     }
     if(i==n-1&&a[i]>d) t++;
     cout<<t<<endl;
}
