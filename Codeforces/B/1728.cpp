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
        stack<int> r;
        for(int i=n;i>0;i--)
        {
            if(i<n-1)
            {
                if(n%2==0&&i%2==0) r.push(i-1);
                else if(n%2==0&&i%2!=0) r.push(i+1);
                else if((n-2)%2!=0&&i%2!=0&&i-1>1) r.push(i-1);
                else if((n-2)%2!=0&&i%2==0) r.push(i+1);
                else r.push(i);
            }
            else r.push(i);
        }
        for(int i=1;i<=n;i++)
        {
            if(i<n) cout<<r.top()<<" ";
            else cout<<r.top()<<endl;
            r.pop();
        }
    }

}
