#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, i, a, b, n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&a,&b);
        printf("%d\n",n*b-n*a);
    }
    return 0;
}

