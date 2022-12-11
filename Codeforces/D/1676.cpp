#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m], mx=0, s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                s=0;
                int k=i, l=j;
                while(k>=0&&l<m) s+=a[k][l], k--, l++;
                k=i-1, l=j-1;
                while(k>=0&&l>=0) s+=a[k][l], k--, l--;
                k=i+1, l=j-1;
                while(k<n&&l>=0) s+=a[k][l], k++, l--;
                k=i+1, l=j+1;
                while(k<n&&l<m) s+=a[k][l], k++, l++;
                mx=max(mx,s);
            }
        }
        cout<<mx<<endl;
    }
}
