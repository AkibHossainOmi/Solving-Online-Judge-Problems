#include<stdio.h>
int main()
{
    int a,b,c,d,k,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
    int m=0;
        if(a<c) m=m+c-a;
        if(a>c) m=m+a-c;
        if(b<d) m=m+d-b;
        if(b>d) m=m+b-d;
    if(m==k||m%2==k%2&&m<k) printf("YES\n");
    else printf("NO\n");
    }
}
