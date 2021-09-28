#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d eh o maior\n",(((((a+b)+abs(a-b))/2)+c)+abs((((a+b)+abs(a-b))/2)-c))/2);
    return 0;
}
