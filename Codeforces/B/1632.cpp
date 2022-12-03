#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            if(i==pow(2,int(log2(n-1)))) cout<<"0 ";
            cout<<i<<" ";
        }
        cout<<endl;
    }
}