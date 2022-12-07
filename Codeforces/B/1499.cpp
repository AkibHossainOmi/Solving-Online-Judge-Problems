#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=0, o=0;
        if(s.find("11")!=string::npos)
        {
            o=s.find("11");
            reverse(s.begin(), s.end());
            if(s.find("00")!=string::npos) z=s.size()-s.find("00")-1;
        }
        if(o<z) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
