#include <stdio.h>
#include<math.h>
int main()
{
    float j,n=1,k,s,i;
    for(j=0; j<=19; j++)
    {
        for(i=0; i<=1; i++)
        {
            k=pow(2,j);
        }
        s=n/k+s;
        n=n+2;
    }
    printf("%.2f\n",s);
    return 0;
}
