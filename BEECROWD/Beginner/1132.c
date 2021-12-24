#include <stdio.h>

int main() {
 int i,g,f,a=0;
 scanf("%d%d",&g,&f);
 if(g>f)
 {
    for(i=f;i<=g;i++)
    {
        if(i%13!=0)
          a=a+i;
    }
 }
 else
 {
    for(i=g;i<=f;i++)
    {
        if(i%13!=0)
          a=a+i;
    }
 }
  printf("%d\n",a);
    return 0;
}
