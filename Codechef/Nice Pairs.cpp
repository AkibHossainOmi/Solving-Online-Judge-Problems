#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        sum=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(k-j>9)
                {
                    break;
                }
                if(abs((s[k]-48)-(s[j]-48))==k-j) sum++;
            }
        }
        printf("%d\n",sum);
    }
}
