#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll n, x;
         cin>>n;
         ll a[n], b[n], c1=0, c2=0, c=0;
         for(ll i=0;i<n;i++)
         {
             cin>>a[i];
             //b[i]=__gcd(a[i],i+1);
             //cout<<b[i]<<" ";
             if(i==0) x=a[i];
             x=__gcd(x,a[i]);
         }
         if(x!=1)
         {
             for(ll i=n-1;i>=0;i--)
             {
                 //cout<<"Asche "<<__gcd(x,__gcd(a[i],i+1))<<endl;
                 if(i>0)
                 {
                     ll p=__gcd(a[i],i+1);
                     ll q=__gcd(a[i-1],i);
                     if(__gcd(p,q)==1&&c1==0)
                     {
                         c1=n-(i+1)+1+n-i+1;
                         //break;
                     }
                 }
                 if(__gcd(x,__gcd(a[i],i+1))==1&&c2==0)
                 {
                     c2=n-(i+1)+1;
                     //break;
                 }
                 if(c1!=0&&c2!=0) break;
             }

             if(c1==0&&c2!=0) c=c2;
             if(c2==0&&c1!=0) c=c1;
             if(c1!=0&&c2!=0) c=min(c1,c2);
         }
         //cout<<c1<<" "<<c2<<"Asche "<<endl;
         cout<<c<<endl;
         //cout<<" Asche"<<endl;
     }
}
