#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+10]={0},x;
    for(int i=0;i<4*n-1;i++)
    {
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<n+1;i++)
    {
        if(a[i]==3)
        {
            printf("%d\n",i);
            return 0;
        }
    }
}
