#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, i=2, a=0, b;
        cin>>n;
        while(i<=sqrt(n))
        {
            if(n%i==0) 
            {
                a=n/i;
                break;
            }
            i++;
        }
        if(a==0) a=1, b=n-1;
        else b=n-a;
        cout<<a<<" "<<b<<endl;
    }
}
