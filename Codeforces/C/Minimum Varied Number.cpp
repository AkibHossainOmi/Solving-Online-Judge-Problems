#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=0, j=0;
        string a;
        char c;
        for(int i=9; i>=1; i--)
        {
            s+=i;
            c=48+i; //character of the digit
            if(s<n)
            {
                a.append(1,c);
            }
            else if(s==n)
            {
                a.append(1,c);
                break;
            }
            else
            {
                s-=i;
                c=n-s+48; //character of the digit
                a.append(1,c);
                break;
            }
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
    }
    return 0;
}
