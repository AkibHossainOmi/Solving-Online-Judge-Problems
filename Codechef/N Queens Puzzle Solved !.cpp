#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    double n;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%lf",&n);
        double y=pow(0.143*n,n);
        int x=y;
        if(y-x>=0.5) x++;
        printf("%d\n",x);
        t--;
    }
}
