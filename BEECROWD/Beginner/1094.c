#include <stdio.h>
int main() {
int a,i,m=0,c=0,r=0,s=0,j;
scanf("%d",&a);
int n[a][2]; char k[a][2];
for(i=0;i<a;i++)
{
        for(j=0;j<1;j++)
        {
         scanf("%d",&n[i][j]);
        }
        for(j=1;j<2;j++)
        {
         m=n[i][0]+m;
         scanf(" %c",&k[i][j]);
         if(k[i][1]=='C') c=n[i][0]+c;
         if(k[i][1]=='R') r=n[i][0]+r;
         if(k[i][1]=='S') s=n[i][0]+s;
        }
}
printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %\n"
       "Percentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n",m,c,r,s,(c*1.00/m)*100,(r*1.00/m)*100,(s*1.00/m)*100);
return 0;
}
