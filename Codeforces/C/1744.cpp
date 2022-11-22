#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll n, r=0, x=0, i, j=0, e=0;
         char c;
         string s;
         cin>>n>>c;
         cin>>s;
         for(ll i=0;i<s.size();i++)
         {
             if(s[i]=='g')
             {
                 e=i+1;
                 break;
             }
         }
         if(c=='g') x=0;
         else
         for(i=0;i<s.size();i++)
         {
             if(j==1) r++;
             if(s[i]=='g')
             {
                 if(x==0) x=r;
                 else x=max(x,r);
                 j=0, r=0;
             }
             if(s[i]==c&&j==0) j=1;
         }
         if(i==s.size()&&j==1) r+=e, x=max(x,r);
         cout<<x<<endl;
     }
}
