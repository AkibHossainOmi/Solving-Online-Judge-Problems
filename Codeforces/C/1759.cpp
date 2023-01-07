#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll L, R, X, A, B;
        cin>>L>>R>>X>>A>>B;
        if(L<=B&&B<=R)
        {
            if(A==B) cout<<"0\n";
            else if(abs(A-B)>=X) cout<<"1\n";
            else if((L<=(max(A,B)+X)&&(max(A,B)+X)<=R)||(L<=(min(A,B)-X)&&(min(A,B)-X)<=R)) cout<<"2\n";
            else 
            {
                ll D1=abs(A-L), D2=abs(L-R), D3=abs(R-B), d1=abs(A-R), d3=abs(L-B);
                if((D1>=X&&D2>=X&&D3>=X)||(d1>=X&&D2>=X&&d3>=X)) cout<<"3\n";
                else cout<<"-1\n";
            }
        }
        else cout<<"-1\n";
    }
}
