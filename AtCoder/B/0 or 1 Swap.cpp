#include <stdio.h>
#include<math.h>
int main()
{
    int n,r=0,x=0;
    scanf("%d",&n);
    int a[n+1], b[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
        if(b[i]!=a[i]) r++;
    }
    if(r<=2) printf("YES\n");
    else printf("NO\n");
    return 0;
}
