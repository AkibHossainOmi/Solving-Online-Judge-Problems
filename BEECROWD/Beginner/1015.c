#include <stdio.h>
int main() 
{
 double a,b,c,d;
 scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
 printf("%.4lf\n",pow((a-c)*(a-c)+(b-d)*(b-d),0.5));
 return 0;
}
