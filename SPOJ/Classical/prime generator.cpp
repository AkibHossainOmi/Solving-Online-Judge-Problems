#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int q=0,p[32000]={0};
void sieve(int l, int r)
{
    int i,j, m=sqrt(r), x[100002]={0};
    if(l==1) l++;
    for(i=2;i<=m;i++)
    {
        if(x[i]==1) continue;
        p[q]=i; //printf("%d\n",i);
        q++;
        for(j=i*2;j<=m;j+=i)
        {
            x[j]=1;
        }
    } //printf("%d\n",q);
}
void segsieve(int a, int b)
{
    int i,j,r=0,m,y[100000]={0};
    if(a==1) a++;
    for(i=0;i<q;i++)
    {
        if(p[i]>=a) m=p[i]*2;
        else m=(a/p[i])*p[i];
        if(m<a) m+=p[i];
        for(j=m;j<=b;j+=p[i])
        {
            y[j-a]=1; //printf("%d\n",j);
        } //printf("\n");
    }
    for(i=0;i<b-a+1;i++)
    {
        if(y[i]==0)
        {
            printf("%d\n",i+a);
            r++;
        }
    } //printf("\n%d\n",r);
}
int main()
{
    int t,a,b,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        sieve(a,b);//999900000,1000000000
        segsieve(a,b);
    }
	return 0;
}
