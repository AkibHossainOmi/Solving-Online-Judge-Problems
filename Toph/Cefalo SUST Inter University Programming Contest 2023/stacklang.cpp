#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
ll sum=0, r=0, N=1e6;
deque<ll> a;
string s;
int main()
{
    FastIO;
    while(cin>>s)
    {
        if(s=="REVERSE") r^=1;
        else if(s=="PUSH")
        {
            ll x;
            cin>>x;
            sum+=x;
            if(r==1) 
            {
                a.push_front(x);
                if(a.size()>N) 
                {
                    sum-=a.back();
                    a.pop_back();
                }
            }
            else 
            {
                a.push_back(x);
                if(a.size()>N) 
                {
                    sum-=a.front();
                    a.pop_front();
                }
            }
        }
        else if(s=="POP"&&a.size()>0)
        {
            if(r==1)
            {
                sum-=a.front();
                a.pop_front();
            }
            else
            {
                sum-=a.back();
                a.pop_back();
            }
        }
        else if(s=="SUM") cout<<sum<<endl;
        else if(s=="PRINT")
        {
            if(a.size()==0) cout<<"-\n";
            else if(r==1) cout<<a.front()<<endl;
            else cout<<a.back()<<endl;
        }
        else if(s=="SIZE") cout<<a.size()<<endl;
        else if(s=="REPEAT")
        {
            ll repeat;
            cin>>repeat;
            vector<ll> v;
            if(a.size()==N||repeat==0) continue;
            ll totalneed=repeat*a.size(), empty=N-a.size();
            if(totalneed<=empty)
            {
                for(auto i=a.begin(); i!=a.end(); i++) v.push_back(*i);
                while(repeat--)
                for(ll i=0; i<v.size(); i++) a.push_back(v[i]), sum+=v[i];
            }
            else
            {
                if(r==1)
                {
                    for(auto i=a.begin(); i!=a.end(); i++) 
                    {
                        v.push_back(*i);
                        if(v.size()+a.size()==N) break;
                    }
                    while(repeat--)
                    {
                        for(ll i=0; i<v.size(); i++)
                        {
                            a.push_back(v[i]);
                            sum+=v[i];
                            if(a.size()==N) break;
                        }
                        if(a.size()==N) break;
                    }
                }
                else
                {
                    for(auto i=a.rbegin(); i!=a.rend(); i++) 
                    {
                        v.push_back(*i);
                        if(v.size()+a.size()==N) break;
                    }
                    while(repeat--)
                    {
                        for(ll i=0; i<v.size(); i++)
                        {
                            a.push_front(v[i]);
                            sum+=v[i];
                            if(a.size()==N) break;
                        }
                        if(a.size()==N) break;
                    }
                }
            }
        }
    }
}