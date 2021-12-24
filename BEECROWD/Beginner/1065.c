#include <stdio.h>

int main() {
int n[5],i=0,j;
for(j=0;j<=4;j++)
{
scanf("%d",&n[j]);
if(n[j]%2==0)
i++;
}
printf("%d valores pares\n",i);
    return 0;
}
