#include <stdio.h>

int main()
{
    double f,s;
    char n[20];
    scanf("%s%lf%lf",&n,&f,&s);
    printf("TOTAL = R$ %.2lf\n",f+s*0.15);
    return 0;
}
