#include <stdio.h>

int main() {
 double a,b,c=0,d=0,i;
 int x;
 for(b=1;b>0;b++)
 {
     if(c==2)
     {
         printf("media = %.2lf\n",d/2);
         c=0;
         d=0;
         for(i=1;i>=0;i++)
            {
                scanf("%d",&x);
                printf("novo calculo (1-sim 2-nao)\n");
                if(x==2||x==1) break;
            }
     }
     if(x==2) break;
     scanf("%lf",&a);
     if(a>=0&&a<=10)
     {
         c++;
         d=a+d;
     }
     else printf("nota invalida\n");
 }

    return 0;
}
