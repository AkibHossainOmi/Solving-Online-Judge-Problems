#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[3],m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        m = max(max(a[0],a[1]),a[2]);
        if(a[0]==a[1]&&a[1]==a[2])
        {
            printf("1 1 1\n");
            continue;
        }
        else if(a[0]==a[1]&&a[0]==m)
        {
            printf("%d %d %d\n",1,1,m-a[2]+1);
            continue;
        }
        else if(a[0]==a[2]&&a[0]==m)
        {
            printf("%d %d %d\n",1,m-a[1]+1,1);
            continue;
        }
        else if(a[1]==a[2]&&a[1]==m)
        {
            printf("%d %d %d\n",m-a[0]+1,1,1);
            continue;
        }
        if(a[0]==m) printf("0 ");
        else printf("%d ",m-a[0]+1);
        if(a[1]==m) printf("0 ");
        else printf("%d ",m-a[1]+1);
        if(a[2]==m) printf("0\n");
        else printf("%d\n",m-a[2]+1);
    }
}
