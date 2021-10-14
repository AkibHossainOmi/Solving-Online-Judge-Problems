#include <stdio.h>

int main() {
 int a[10000],i,j;
 scanf("%d",&i);
 for(j=0;j<i;j++)
 {
     scanf("%d",&a[j]);
     if(a[j]%2==0&&a[j]>0)
     printf("EVEN POSITIVE\n");
     else if(a[j]%2==0&&a[j]<0)
     printf("EVEN NEGATIVE\n");
     else if(a[j]%2!=0&&a[j]>0)
     printf("ODD POSITIVE\n");
     else if(a[j]%2!=0&&a[j]<0)
     printf("ODD NEGATIVE\n");
     else
     printf("NULL\n");
 }
    return 0;
}
