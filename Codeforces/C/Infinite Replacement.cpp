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
/*{
    int a,b,c,r;
    scanf("%d %d %d",&a,&b,&c);
    //printf("%.11lf\n",656/939.0);
    printf("%d.",a/b);
    int x=10*(a%b);
    for(int i=0;i<c;i++)
    {
        if(i<c-1) printf("%d",x/b);
        if(i==c-1)
        {
            r=x/b;
            x=10*(x%b);
            if(x/b>=5) printf("%d\n",r+1);
            else printf("%d\n",r);
        }
        x=10*(x%b);
        //printf("\n%d\n",x);
    }
}
*/
