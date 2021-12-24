#include<stdio.h>
int main()
{
    int n, i, r=0;
    scanf("%d",&n);
    char w[50];
    for(i=0; i<n; i++)
    {
        scanf("%s",&w);
        if(w[0]=='T') r+=4;
        if(w[0]=='C') r+=6;
        if(w[0]=='O') r+=8;
        if(w[0]=='D') r+=12;
        if(w[0]=='I') r+=20;

    }
    printf("%d\n",r);
}
