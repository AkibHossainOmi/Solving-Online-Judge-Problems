#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,p;
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        char a[55],b[55];
        scanf("%s %s",&a,&b);
        for(int i=0;i<strlen(b);i++)
        {
            if(b[i]=='a')
            {
                p++;
                break;
            }
        }
        if(strlen(b)==1&&b[0]=='a') printf("1\n");
        else if(p==1) printf("-1\n");
        else printf("%.0f\n",pow(2,strlen(a)));
    }
}
