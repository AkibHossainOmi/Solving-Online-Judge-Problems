#include <stdio.h>
int main()
{
float i,j,m;
for(i=0;i<=2.01;i+=0.2)
{
    for(j=1;j<=3;j++)
    {
        m=j+i;
        if(i>0&&i<1)
        printf("I=%.1f J=%.1f\n",i,m);
        else if(i>1&&i<2)
        printf("I=%.1f J=%.1f\n",i,m);
        else
        printf("I=%.0f J=%.0f\n",i,m);
    }
}
    return 0;
}
