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
        int a[n+1], b[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0, op;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]!=b[i]) c++;
        }
        if(c==0)
        {
            cout<<"0\n";
            continue;
        }
        else
        {
            op=c;
        }
        sort(a,a+n);
        sort(b,b+n);
        c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) c++;
        }
        cout<<min(c+1,op)<<endl;
    }

    return 0;
}
