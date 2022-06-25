#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll item, query;
    cin>>item>>query;
    vector<long long> n(item), s(item+1);
    ll sum, x;
    for(ll i=0;i<item;i++)
    {
        cin>>x;
        n[i]=x;
    }
    sort(n.begin(),n.end());
    s[0]=0;
    for(ll i=0;i<item;i++) s[i+1] = s[i] + n[i];
    for(ll i=0;i<query;i++)
    {
        ll total_item, cheapest_item;
        cin>>total_item>>cheapest_item;
        sum=s[item] - s[item - total_item]- (s[item] - s[item- (total_item-cheapest_item)]);
        cout<<sum<<endl;
        //ll start= item-total_item, finish= item- (total_item-cheapest_item);
    }
    return 0;
}
