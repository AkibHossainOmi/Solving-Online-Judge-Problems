#include <stdio.h>

int main() {
 int i,g,f,m=0,n=0;
 scanf("%d",&g);
 for(i=1;i<=g;i++)
 {
     for(f=1;f>0;f++)
     {
         if(n==3) break;
         n++;
         m++;
         printf("%d ",m);
     }
     if(n==3)
        {
            m+=1;
            n=0;
            printf("PUM\n");
        }
 }
    return 0;
}
