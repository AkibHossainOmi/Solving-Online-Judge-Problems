#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int SH, SM, N, minH, minM;
		cin>>N>>SH>>SM;
		int H[N+1], M[N+1], TM[N+1],TH[N+1];
		for(int i=0;i<N;i++)
		{
			cin>>H[i]>>M[i];
			if(M[i]<SM) M[i]=M[i]+60, H[i]=H[i]-1;
            if(H[i]<SH) H[i]=H[i]+24;
            TM[i]=M[i]-SM;
            TH[i]=H[i]-SH;
			if(i==0) minH=TH[i], minM=TM[i];
			else
			{
				if(minH>TH[i]) minH=TH[i], minM=TM[i];
				if(minH==TH[i])
                {
                    minH=TH[i];
                    minM=min(minM,TM[i]);
                }
			}
		}
		cout<<minH<<" "<<minM<<endl;
	}

	return 0;
}
