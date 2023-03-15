#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n_patient, n_dose, duration, waiting;
        cin>>n_patient>>n_dose>>duration>>waiting;
        ll Time[n_patient];
        for(ll i=0; i<n_patient; i++) cin>>Time[i];
        ll count_dose=0, start, packet=0;
        for(ll i=n_patient-1; i>=0; i--)
        {
            if(count_dose==n_dose) count_dose=0, start=Time[i];
            if(i==n_patient-1) count_dose++, start=Time[i], packet++;
            else
            {
                if(Time[i]+waiting>Time[i+1]) 
                {
                    ll main_time=Time[i];
                    Time[i]=Time[i+1];
                    if(start-Time[i]<=duration) 
                    {
                        if(count_dose==0) packet++;
                        count_dose++;
                    }
                    else Time[i]=main_time, count_dose=1, packet++, start=Time[i];
                }
                else
                {
                    Time[i]+=waiting;
                    if(start-Time[i]<=duration) 
                    {
                        if(count_dose==0) packet++;
                        count_dose++;
                    }
                    else Time[i]-=waiting, count_dose=1, packet++, start=Time[i];
                }
            }
        }
        cout<<packet<<endl;
    }
}