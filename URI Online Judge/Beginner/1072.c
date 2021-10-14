#include <stdio.h>

int main() {
int i,a[10000],j,k=0;
scanf("%d",&i);
for(j=0;j<i;j++)
{
    scanf("%d",&a[j]);
    if(a[j]>=10&&a[j]<=20)
    k++;
}
printf("%d in\n%d out\n",k,i-k);
    return 0;
}
