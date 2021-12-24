#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,i;
    for(i=0; i>=0; i++)
    {
        scanf("%d",&a);
        if(a==0) break;
        scanf("%d",&b);
        if(b==0) break;
        scanf("%d",&c);
        if(c==0) break;
        d=pow((a*b)/(c/100.0),0.5);
        printf("%d\n",d);
    }
    return 0;
}
