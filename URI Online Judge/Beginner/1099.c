#include <stdio.h>
int main()
{
int i,j,a,s,k,l,m;
scanf("%d",&a);
int n[a][2];
for(i=0;i<a;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&n[i][j]);
    }
    if(n[i][0]>n[i][1]&&n[i][0]-n[i][1]!=1)
    {
        s=0;
        for(l=n[i][1]+1;l<n[i][0];l++)
        {
            if(l%2!=0) s=s+l;
        }
        printf("%d\n",s);
    }
  else if(n[i][0]<n[i][1]&&n[i][1]-n[i][0]!=1)
    {
        m=0;
        for(k=n[i][1]-1;k>n[i][0];k--)
        {
            if(k%2!=0) m=k+m;
        }
        printf("%d\n",m);
    }
   else printf("0\n");
}


    return 0;
}
