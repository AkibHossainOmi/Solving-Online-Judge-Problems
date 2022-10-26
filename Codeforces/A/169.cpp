#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int x, y, n;
    cin>>n>>x>>y;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[y]-a[y-1]>0) cout<<a[y]-a[y-1]<<endl;
    else cout<<"0" <<endl;
}
