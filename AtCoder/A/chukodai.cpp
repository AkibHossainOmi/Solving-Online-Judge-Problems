#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    char s[50];
    int a,b;
    scanf("%s %d %d",&s,&a,&b);
    char c;
    c=s[a-1];
    s[a-1]=s[b-1];
    s[b-1]=c;
    printf("%s\n",s);
    return 0;
}
