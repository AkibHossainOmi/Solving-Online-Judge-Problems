#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll kth_bit(ll n, ll k)
{
    ll bit_no=k;
    ll unit_set=pow(2,bit_no-1);
    ll divide=n/unit_set, one=divide/2, total_one=one*unit_set;
    if(divide%2!=0) total_one+=n%unit_set+1;
    return total_one;
}
int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll l, r, m;
        cin>>l>>r;
        ll max_bit=log2(r)+1;
        if(pow(2,max_bit)<r) max_bit++;
        for(ll i=1; i<=max_bit; i++)
        {
            if(i==1) m=kth_bit(r,i)-kth_bit(l-1,i);
            else if(m<kth_bit(r,i)-kth_bit(l-1,i)) m=kth_bit(r,i)-kth_bit(l-1,i);
        }
        cout<<r-l+1-m<<endl;
    }
}        