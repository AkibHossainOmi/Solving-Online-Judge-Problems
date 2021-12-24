#include <stdio.h>

int main() {
int n[100],i,j,k,m,p;
for(i=0;i<100;i++)
{
    scanf("%d",&n[i]);
}
for(k=0;k<100;k++)
{
    m=n[k];
    p=k;
    for(j=0;j<100;j++)
    {
        if(m<n[j])
        {
          m=n[j];
          p=j;
        }
    }
}
printf("%d\n%d\n",m,p+1);
    return 0;
}
