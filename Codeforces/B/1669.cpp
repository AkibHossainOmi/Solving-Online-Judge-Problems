#include<bits/stdc++.h>
//using namespace std;
//#define ll long long int
const int r= 2*100000+100;
int main()
{
    int n,t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n], c=0, b[r]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
            //printf("%d...\n",b[a[i]]);
            if(b[a[i]]>=3)
            {
                c=3;
                x=a[i];
            }
        }
        if(c==3) printf("%d\n",x);
        else printf("-1\n");
    }
    return 0;
}
