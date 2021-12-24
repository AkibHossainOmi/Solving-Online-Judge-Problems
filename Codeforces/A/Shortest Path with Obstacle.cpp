#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xa,ya,xb,yb,xf,yf,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xf,&yf);
        if(ya>yb&&xa==xb&&xf==xa&&yf<ya&&yf>yb)
        printf("%d\n",ya-yb+2);
        else if(ya>yb&&xa==xb&&(yf>ya||yf<yb||xf!=xa))
        printf("%d\n",ya-yb);
        else if(ya<yb&&xa==xb&&xf==xa&&yf<yb&&yf>ya)
        printf("%d\n",yb-ya+2);
        else if(ya<yb&&xa==xb&&(yf>yb||yf<ya||xf!=xa))
        printf("%d\n",yb-ya);
        //
        if(xa>xb&&ya==yb&&yf==ya&&xf<xa&&xf>xb)
        printf("%d\n",xa-xb+2);
        else if(xa>xb&&ya==yb&&(xf>xa||xf<xb||yf!=ya))
        printf("%d\n",xa-xb);
        else if(xa<xb&&ya==yb&&yf==ya&&xf<xb&&xf>xa)
        printf("%d\n",xb-xa+2);
        else if(xa<xb&&ya==yb&&(xf>xb||xf<xa||yf!=ya))
        printf("%d\n",xb-xa);
        else
        {
            if(ya>yb&&xb>xa) printf("%d\n",ya-yb+xb-xa);
            else if(ya>yb&&xb<xa) printf("%d\n",ya-yb+xa-xb);
            else if(ya<yb&&xb>xa) printf("%d\n",yb-ya+xb-xa);
            else if(ya<yb&&xb<xa) printf("%d\n",yb-ya+xa-xb);
        }
    }
}
