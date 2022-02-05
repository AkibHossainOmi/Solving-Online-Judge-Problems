#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,x,y,n;
    for(i=0;i<t;i++)
    {
        n=0;
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if(x%a==0) n=n+(x/a);
        else n=n+(x/a)+1;
        if(y%b==0) n=n+(y/b);
        else n=n+(y/b)+1;
        printf("%d\n",n);
    }
    return 0;
}
