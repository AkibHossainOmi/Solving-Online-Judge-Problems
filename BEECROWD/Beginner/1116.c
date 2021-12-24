#include <stdio.h>

int main() {
 float a,b,c,i;
 scanf("%f",&a);
 for(i=0;i<a;i++)
 {
     scanf("%f%f",&b,&c);
     if(c==0) printf("divisao impossivel\n");
     else printf("%.1f\n",b/c);
 }

    return 0;
}
