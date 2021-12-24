#include <stdio.h>

int main()
{
    float i,n,s=0,a=0;
    for(i=1; i>=1; i++)
    {
        scanf("%f",&n);
        if(n<0) break;
        else
        {
            s++;
            a+=n;
        }
    }
    printf("%.2f\n",a/s);
    return 0;
}
