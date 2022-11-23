#include<iostream>
#include<math.h>
using namespace std;
#define ll long long int
ll withoutzero(ll n)
{
    ll r, s=0, i=0;
    /*
    r=>remainder
    s=>sum
    i=>index of the digit
    */
    while(n>=10)
    {
        r=n%10;
        if(r!=0)
        {
            s+=r*pow(10,i);

            i++;
        }
        n=n/10;
    }
    if(n!=0)
    {
        s+=n*pow(10,i);
    }
    return s;
}
int main()
{
    //cout<<withoutzero(106);
    ll a,b;
    /*
    a=>1st number
    b=>2nd number
    */
    cin>>a>>b;
    ll c = a+b;
    c=withoutzero(c);
    a=withoutzero(a);
    b=withoutzero(b);
    ll d=a+b;
    if(c==d) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
