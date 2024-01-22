#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        double x[4], y[4];
        for(ll i=0; i<4; i++) cin>>x[i]>>y[i];
        ll res;
        double m1=(y[0]-y[1])/(x[0]-x[1]);
        double m2=(y[2]-y[3])/(x[2]-x[3]);
        if(m1!=m2)
        {
            m1=(y[0]-y[2])/(x[0]-x[2]);
            m2=(y[1]-y[3])/(x[1]-x[3]);
            if(m1!=m2)
            {
                m1=(y[0]-y[3])/(x[0]-x[3]);
                m2=(y[1]-y[2])/(x[1]-x[2]);
                res=pow(x[0]-x[3],2)+pow(y[0]-y[3],2);
            }
            else res=pow(x[0]-x[2],2)+pow(y[0]-y[2],2);
        }
        else res=pow(x[0]-x[1],2)+pow(y[0]-y[1],2);
        cout<<res<<endl;
    }
}
