#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
       ll n;
       cin>>n;
       ll ar[n];
       ll xo=0;
       
       for(ll j=0;j<n;j++)
       {
           cin>>ar[j];
           xo^=(ar[j]<<1);
       }
       cout<<xo<<endl;
    }
}
