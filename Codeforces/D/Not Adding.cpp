#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int z=1e7+3;
int a[z], b[z];
int main()
{
    int n,i,j,r=0,x,element;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0) x=a[0];
        if(a[i]>x) x=a[i];
        b[a[i]]=1;
    }
    x=0;
    for(i=1;i<=z;i++)
    {
        x=0;
        for(j=i;j<=z;j+=i)
        {
            if(b[j]==1&&x==0)
            {
                element=j;//store element
                x++;
            }
            else if(b[j]==1)
            {
                element=__gcd(element,j); //store element
            }
        }
        if(element==i)
        {
            r++;
        }
    }
    printf("%d\n",r-n);
}
