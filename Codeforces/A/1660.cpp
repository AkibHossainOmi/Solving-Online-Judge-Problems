#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t;
     scanf("%lld",&t);
     long long int a,b;
     while(t--)
     {
         scanf("%lld %lld",&a,&b);
         int s;
         if(a==0)
         {
             printf("1\n");
             continue;
         }
         else printf("%lld\n",1+a+2*b);
     }
}
