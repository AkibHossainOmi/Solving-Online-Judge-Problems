#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int a[n], m, c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0) m=a[i];
            if(a[i]<m) m=a[i];
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]>m) c++;
        }
        cout<<c<<endl;
    }
}

