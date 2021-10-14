#include <stdio.h>

int main() {
 int i,g,f=0,m=0,n=0;
 printf("MUITO OBRIGADO\n");
 for(i=0;i>=0;i++)
 {
      scanf("%d",&g);
      if(g==4) break;
      if(g<1&&g>4) continue;
      if(g==1) f++;
      else if(g==2) m++;
      else if(g==3) n++;
 }
 printf("Alcool: %d\n",f);
 printf("Gasolina: %d\n",m);
 printf("Diesel: %d\n",n);
    return 0;
}
