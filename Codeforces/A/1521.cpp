#include<iostream>
using namespace std;

int main()
{
	int t;
	long long int A,B;
	cin>>t;
	for(int i=0;i<t;i++)
    {
		cin>>A>>B;
		if(B==1) cout<<"No\n";
		else cout<<"YES\n"<<A<<" "<<A*B<<" "<<A*B+A<<"\n";
	}
}
