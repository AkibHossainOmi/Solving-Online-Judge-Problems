#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], h=0, f=0, t=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(t<0) continue;
        if(a[i]==25) t+=25;
        else if(a[i]==50)
        {
            f+=50;
            t-=25;
        }
        else
        {
            if(f>=50)
            {
                f-=50;
                t-=25;
            }
            else t-=75;
        }
        //cout << t << " ashche\n";
    }
    if(t>=0) cout<< "YES\n";
    else cout<< "NO\n";
    return 0;
}
