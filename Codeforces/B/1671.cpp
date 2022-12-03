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
            int a[n], r=0, check2=0, check3=0;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(i>0)
                {
                    if(a[i]-a[i-1]==2&&r==0) check2++;
                    else if(a[i]-a[i-1]==3&&r==0) check3++;
                    if((check3!=0&&check2!=0)||check3>1||check2>2||a[i]-a[i-1]>3) r=1;
                }
            }
            if(r==0) cout<<"YES\n";
            else cout<<"NO\n";
    }
}
