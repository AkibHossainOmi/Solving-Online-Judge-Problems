#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI 3.141592653589793

int main()
{
    double H, L, theta, D;
    cin>>H>>L;
    theta=(PI-(2.0*atan(L/H)));
    D=L/tan(theta);
    printf("%.13lf\n",D);
}
