#include <stdio.h>

int main() {
 int a,b,c=0,d=0,i,g,x,e=0,f=0;
 for(b=1;b>0;b++)
 {
   scanf("%d%d",&i,&g);
   c++;
   if(i>g) d++;
   else if(i<g) e++;
   else f++;
   printf("Novo grenal (1-sim 2-nao)\n");
   scanf("%d",&x);
   if(x==2) break;
 }
  printf("%d grenais\n",c);
  printf("Inter:%d\n",d);
  printf("Gremio:%d\n",e);
  printf("Empates:%d\n",f);
  if(d>e) printf("Inter venceu mais\n");
  else if(d<e) printf("Gremio venceu mais\n");
  else printf("Não houve vencedor\n");
    return 0;
}
