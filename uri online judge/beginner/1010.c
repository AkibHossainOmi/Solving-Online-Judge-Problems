#include <stdio.h>

int main()
{
    double u1,u2;
    int c1,n1,c2,n2;
    scanf("%d%d%lf%d%d%lf",&c1,&n1,&u1,&c2,&n2,&u2);
    printf("VALOR A PAGAR: R$ %.2lf\n",u1*n1+u2*n2);
    return 0;
}
