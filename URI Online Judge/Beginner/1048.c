#include <stdio.h>

int main() {

double a;
scanf("%lf",&a);
if(a>=0&&a<=400.00)
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",a+(a*15)/100,(a*15)/100);
else if(a>=400.01&&a<=800.00)
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",a+(a*12)/100,(a*12)/100);
else if(a>=800.01&&a<=1200.00)
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",a+(a*10)/100,(a*10)/100);
else if(a>=1200.01&&a<=2000.00)
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",a+(a*7)/100,(a*7)/100);
else
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",a+(a*4)/100,(a*4)/100);
    return 0;
}
