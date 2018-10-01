#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    
    ll t;
    cin>>t;
    ll ar[100000][2];
       ar[0][0]=ar[0][1]=1;
       
       for(ll j=1;j<100000;j++)
       {
           ar[j][0]=ar[j-1][1];
           ar[j][1]=(ar[j-1][0]+ar[j-1][1])%(1000000007);
       }
       
    for(ll i=0;i<t;i++)
    {
       ll m,n;
       cin>>m>>n;
       ll a[m],b[m];
       ll as=0;
       ll bs=0;
       for(ll j=0;j<m;j++){
           cin>>a[j];
           as=(as+a[j])%1000000007;
       }
       for(ll j=0;j<m;j++){
           cin>>b[j];
           bs=(bs+b[j])%1000000007;
       }
       
       ll res=0;
       
       if(n==1){
           res=as;
       }
       else if(n==2){
           res=bs;
       }
       else if(n>=3){
               res=(ar[n-3][0]*as)%(1000000007);
               res=(res+(ar[n-3][1]*bs)%(1000000007))%1000000007;
           }
           
           res=(res*m)%1000000007;
    cout<<res<<endl;
    }
}
