#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll row, col, n, sum=0;
        cin>>row>>col;
        n=col-1;
        sum+=(n*(n+1))/2+col*((row*(row+1))/2);
        cout<<sum<<endl;
    }
    return 0;
}
