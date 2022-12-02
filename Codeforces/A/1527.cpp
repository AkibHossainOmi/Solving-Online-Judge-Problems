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
        while(n)
        {
            if((n&(n-1))==0) break;
            else n=(n&(n-1));
        }
        cout<<n-1<<endl;
    }
}

