#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    string s;
    getline(cin,s);
    while (t--)
    {
        string s;
        getline(cin,s);
        reverse(s.begin()+s.size()/2, s.end());
        reverse(s.begin(), s.end()-s.size()/2);
        cout<<s<<endl;
    }
}
