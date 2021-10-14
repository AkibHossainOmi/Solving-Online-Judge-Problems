#include <stdio.h>

int main()
{

float a,b;
scanf("%f%f",&a,&b);
if(a==1)
printf("Total: R$ %.2f\n",b*4.00);
else if(a==2)
printf("Total: R$ %.2f\n",b*4.50);
else if(a==3)
printf("Total: R$ %.2f\n",b*5.00);
else if(a==4)
printf("Total: R$ %.2f\n",b*2.00);
else
printf("Total: R$ %.2f\n",b*1.50);
    return 0;
}
