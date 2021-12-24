#include <stdio.h>

int main() {
int a[5],i,j=0,k=0,l=0;
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    j++;
    if(a[i]>0)
    k++;
    if(a[i]<0)
    l++;
}
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",j,5-j,k,l);
    return 0;
}
