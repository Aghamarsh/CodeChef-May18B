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
       
       for(ll j=0;j<n;j++)
       cin>>ar[j];
       
       sort(ar,ar+n);
       int flag=0;
       
       if(ar[0]==1)
       {
           cout<<0<<endl;
           flag=5;
       }
       else
       {
       for(ll j=1;j<n;j++)
       {
           if(ar[j]%ar[0]!=0)
           {
            cout<<0<<endl;
            flag=5;
            break;
           }
       }
       }
       
       if(flag!=5)
       {
           cout<<-1<<endl;
       }
      
    }
}
