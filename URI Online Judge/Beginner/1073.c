#include <stdio.h>

int main() {
 int a,i;
 scanf("%d",&a);
 for(i=2;i<=a;i=i+2)
 {
     printf("%d^2 = %d\n",i,i*i);
 }
    return 0;
}
