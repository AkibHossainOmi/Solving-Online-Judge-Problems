#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    float r=0;
    scanf("%d",&n);
    float d[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f",&d[i]);
        r+=d[i];
    }
    printf("%.4f\n",r/n);
}
