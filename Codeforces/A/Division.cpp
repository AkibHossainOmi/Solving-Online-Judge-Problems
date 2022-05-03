#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(1900<=n) printf("Division 1\n");
        else if(1600<=n&&n<=1899) printf("Division 2\n");
        else if(1400<=n&&n<=1599) printf("Division 3\n");
        else printf("Division 4\n");
    }
    return 0;
}
