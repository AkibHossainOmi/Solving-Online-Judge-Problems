#include <stdio.h>

int main()
{
    double n;
    scanf("%lf",&n);
    int a=n;
    n=n-a;
    int b=n*100;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n"
           "%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n"
           "%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n"
           "MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n"
           "%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n"
           "%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a/100,a%100/50,a%100%50/20,
           a%100%50%20/10,a%100%50%20%10/5,a%100%50%20%10%5/2,a%100%50%20%10%5%2,b/50,
           b%50/25,b%50%25/10,b%50%25%10/5,b%50%25%10%5);
    return 0;
}
