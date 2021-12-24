#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   int i,a[4],x,y;
   for(i=0;i<t;i++)
   {
       scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
       if(a[0]>a[1]) x=a[0];
       else x=a[1];
       if(a[2]>a[3]) y=a[2];
       else y=a[3];
       sort(a,a+4);
       if((x==a[2]||x==a[3])&&(y==a[2]||y==a[3])) printf("YES\n");
       else printf("NO\n");
   }
    return 0;
}
