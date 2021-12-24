#include <stdio.h>

int main() {
 int i,g,f,h;
 scanf("%d",&g);
 for(i=1;i<=g;i++)
 {
     f=i*i;
     h=f*i;
     printf("%d %d %d\n%d %d %d\n",i,f,h,i,f+1,h+1);
 }
    return 0;
}
