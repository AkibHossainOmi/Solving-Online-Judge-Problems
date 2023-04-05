#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll W, H, x1, y1, x2, y2, w, h;
        cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
        if(W-(x2-x1)>=w||H-(y2-y1)>=h)
        {
            double needed;
            if(W-(x2-x1)<w)
            {
                needed=min(h-y1,h-(H-y2));
                if(needed<0) needed=0;
            }
            else if(H-(y2-y1)<h)
            {
                needed=min(w-x1,w-(W-x2));
                if(needed<0) needed=0;
            }
            else
            {
                ll needed_y=min(h-y1,h-(H-y2)), needed_x=min(w-x1,w-(W-x2));
                if(needed_y<0) needed_y=0;
                if(needed_x<0) needed_x=0;
                needed=min(needed_x,needed_y);
            }
            printf("%lf\n",needed);
        }
        else printf("-1\n");
    }
}